import numpy as np

class NeuralNetwork():
	def __init__(self):
		np.random.seed(1)
		self.synaptic_weights =2*np.random.random((3, 1))-1
	def __sigmoid(seld, x):
		return 1/(1+np.exp(-x))
	def __sigmoid_derivative(self, x):
		return x*(1-x)
	def train(self, training_set_inputs, training_set_outputs, number_of_training_iterations):
		for iteration in iter(range(number_of_training_iterations)):
			output =self.think(training_set_inputs)
			error =training_set_outputs-output
			adjustments =np.dot(training_set_inputs.T, error*self.__sigmoid_derivative(output))
			self.synaptic_weights +=adjustments
			if iteration%1000 == 0:
				print ("error after %s iterations: %s" % (iteration, str(np.mean(np.abs(error)))))
	def think(self, inputs):
		return self.__sigmoid(np.dot(inputs, self.synaptic_weights))
if __name__ == "__main__":
	neural_network =NeuralNetwork()
	print ("Random starting synaptic weights: ")
	print (neural_network.synaptic_weights)
	training_set_inputs =np.array([[0, 0, 1], [1, 1, 1], [1, 0, 1], [0, 1, 0]])
	training_set_outputs =np.array([[0, 1, 1, 0]]).T
	neural_network.train(training_set_inputs, training_set_outputs, 2000000)
	print ("New synaptic weights after training: ")
	print (neural_network.synaptic_weights)
	test =[1, 0, 0]
	print ("Considering new situations %s -> ?: " % test)
	print (neural_network.think(np.array(test)))