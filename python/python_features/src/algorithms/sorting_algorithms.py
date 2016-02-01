import random
import sys

"""
    Function listing


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
