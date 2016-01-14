#sorting Algorithms

#Written for Python3

import random
import sys

#main will create array of numbers and 

"""Function listing


    cli()
    gen_list(size, range_of_numbers)
    execute_sort(selection_name)
    void()
    usage()

"""


def bubble_sort(list_of_numbers):

        index = 0
        is_sorted = False
        length = len(list_of_numbers)

        def swap(a,b):
                list_of_numbers[a], list_of_numbers[b] = (list_of_numbers[b], list_of_numbers[a])

        while index != length-1:
                if list_of_numbers[index] > list_of_numbers[index+1]:
                        swap(index,index+1)
                        index = 0
                else:
                    index += 1

        return list_of_numbers



        

def cli():
    print("Sorting Algorithms")
    print("Select algorithm from list:")
    print("bubble - bubble sort")
    selection = input("algorithm:")

    size_n = input("Size of test:")
    size_n = int(size_n)

    range_n = input("Range of integers:")
    range_n = int(range_n)
    
    list_n = gen_list(size_n, range_n)
    print("List before: " + str(list_n))
    print(str( execute_sort(selection)(list_n) ))




def gen_list(size, range_of_numbers): 
  
    if size < 1:
            raise Exception("Size of numbers is less than 1")

    if range_of_numbers < 1:
            raise Exception("Size of range is less than 1")

    list_of_numbers = []
    while len(list_of_numbers) != size:
            list_of_numbers.append( random.randint(0,range_of_numbers) )

    return list_of_numbers

def execute_sort(selection):
    if selection == "bubble":
            return bubble_sort
    else:
        print("Sort Selection not found.")
        return void

def void(li):
        return

def usage():
        print("Sorting cli interface:")
        print("sorting_prog cli")
        print("sorting_prog size_of_list range_of_numbers list_of_sorts......")
        print("\nSorts:")
        print("\tbubble\t\tbubble sort")




if __name__ == "__main__":
    if len(sys.argv) > 1 and sys.argv[1] == "cli":
           cli()
    elif len(sys.argv) > 3:
            list_of_numbers = gen_list(int(sys.argv[1]), int(sys.argv[2]))
            print("List before sort: " + str(list_of_numbers))
            for sort in sys.argv[3:]:
                print(execute_sort(sort)(list(list_of_numbers)))
    else:
            usage()
