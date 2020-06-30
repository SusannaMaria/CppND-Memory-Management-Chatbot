#include "graphedge.h"
#include "graphnode.h"

/**
 * Construct a new GraphNode object
 * 
 * @param id 
 */
GraphNode::GraphNode(int id)
{
    _id = id;
}

/**
 * Destroy the GraphNode object
 * 
 */
GraphNode::~GraphNode()
{
    //// STUDENT CODE
    ////

    ////
    //// EOF STUDENT CODE
}
/**
 * Add Token
 * 
 * @param token 
 */
void GraphNode::AddToken(std::string token)
{
    _answers.push_back(token);
}

/**
 * Add Edge Parent Node Object
 * 
 * @param edge 
 */
void GraphNode::AddEdgeToParentNode(GraphEdge *edge)
{
    _parentEdges.push_back(edge);
}

/**
 * Add edge to child node
 * 
 * @param edge 
 */
void GraphNode::AddEdgeToChildNode(std::unique_ptr<GraphEdge> edge)
{
    _childEdges.push_back(std::move(edge));
}

//// STUDENT CODE
////

/**
 * Move chatbot to here
 * 
 * @param chatbot 
 */
void GraphNode::MoveChatbotHere(ChatBot chatbot)
{
    _chatBot = std::move(chatbot);
    _chatBot.SetCurrentNode(this);
}

/**
 * Move chatbot to new Node
 * 
 * @param newNode 
 */
void GraphNode::MoveChatbotToNewNode(GraphNode *newNode)
{
    newNode->MoveChatbotHere(std::move(_chatBot));
}
////
//// EOF STUDENT CODE

/**
 * Get childEdge at index
 * 
 * @param index 
 * @return GraphEdge* 
 */
GraphEdge *GraphNode::GetChildEdgeAtIndex(int index)
{
    //// STUDENT CODE
    ////

    return _childEdges[index].get();

    ////
    //// EOF STUDENT CODE
}