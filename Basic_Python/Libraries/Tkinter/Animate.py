from Tkinter import *

class Animation:

	def __init__( self ):
		self.root =  Tk()
		self.frame = Canvas(self.root, width=600, height=600)
	
		self.x = 50
		self.y = 50
		self.dx = 1
		self.dy = 1
		self.box = self.frame.create_rectangle( self.x, self.y, self.x+50, self.y+50, fill="blue")
		self.frame.pack()
		
		self.animate(  )
		self.root.mainloop()

		
	def animate(self):
		self.draw_one_frame()
		self.root.after(50, self.animate)

	def draw_one_frame(self):
		if self.getX() + self.dy*50 > 600 or self.getX() + self.dy*50 < -50:
			self.dx = -self.dx
		if self.getY() + self.dy*50 > 600 or self.getY() + self.dy*50 < -50:
			self.dy = -self.dy


		self.frame.move( self.box,  self.dx*10, self.dy*10)
		self.frame.update()
	
	def getX( self ):
		return self.frame.coords(self.box)[0]

	def getY( self ):
		return self.frame.coords(self.box)[1]


Animation()

