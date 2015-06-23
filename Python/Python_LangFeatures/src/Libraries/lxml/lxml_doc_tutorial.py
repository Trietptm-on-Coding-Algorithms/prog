#python3
#linux mint
#python3 and lxml installed through apt-get

#tutorial can be found at lxml.de/tutorial.html

from lxml import etree


root = etree.Element("root")

root.append( etree.Element("Child1"))

child2 = etree.SubElement(root, "Child2")
child3 = etree.SubElement(root, "Child3")

print(etree.tostring(root, pretty_print=True))
