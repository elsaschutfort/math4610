class DeletedArray:
    def __init__(self):
        self.data = []
        self.deleted = []

    def insert(self, row, col, value):
        while len(self.data) <= row:
            self.data.append([])
            self.deleted.append([])
        while len(self.data[row]) <= col:
            self.data[row].append(None)
            self.deleted[row].append(None)

        if self.deleted[row][col] is not None:
            self.deleted[row][col].append(value)  # Store both deleted and new values in a list
        else:
            self.data[row][col] = value

    def delete(self, row, col):
        if 0 <= row < len(self.data) and 0 <= col < len(self.data[row]):
            if self.data[row][col] is not None:
                if self.deleted[row][col] is not None:
                    self.deleted[row][col].append(self.data[row][col])  # Store both deleted and new values
                else:
                    self.deleted[row][col] = [self.data[row][col]]
                self.data[row][col] = None
            else:
                self.deleted[row][col] = None
        else:
            print("Invalid row or column index.")

    def get(self, row, col):
        if 0 <= row < len(self.data) and 0 <= col < len(self.data[row]):
            if self.deleted[row][col] is not None:
                return self.deleted[row][col][-1]  # Return the most recent value (new value)
            else:
                return self.data[row][col]  # Return the current value
        else:
            print("Invalid row or column index.")
            return None

    def access_deleted(self, row, col):
        if 0 <= row < len(self.data) and 0 <= col < len(self.data[row]):
            if self.deleted[row][col] is not None:
                return self.deleted[row][col][0]  # Return the oldest deleted value
            else:
                return None  # No deleted value at this location
        else:
            print("Invalid row or column index.")
            return None

    def display(self):
        for row in range(len(self.data)):
            for col in range(len(self.data[row])):
                if self.deleted[row][col] is not None:
                    print(f"Deleted: {self.deleted[row][col][0]}", end="\t")
                else:
                    print(self.data[row][col], end="\t")
            print()

# Example usage:
if __name__ == "__main__":
    array = DeletedArray()

    array.insert(0, 0, 1)
    array.insert(0, 1, 2)
    array.insert(1, 1, 3)

    array.display()

    array.delete(0, 1)

    print("\nAfter delete:")
    array.display()

    deleted_value = array.access_deleted(0, 1)
    if deleted_value is not None:
        print(f"Accessed Deleted Value at (0, 1): {deleted_value}")
    else:
        print("No deleted value at (0, 1).")

    array.insert(0, 1, 4)

    print("\nAfter insert:")
    array.display()

    value = array.get(0, 1)
    deleted_value = array.access_deleted(0, 1)
    print(deleted_value)
    if value is None:
        print("Value at (0, 1) is deleted.")
    else:
        print(f"Value at (0, 1): {value}")
