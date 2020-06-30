/**
 * @file graphedge.cpp
 * @author Stephen Welch
 * @brief graphedge class implementation
 * @version 0.1
 * @date 2020-06-30
 * 
 * @copyright MIT License
 * 
 */

#include "graphnode.h"
#include "graphedge.h"

/**
 * Construct a new GraphEdge object
 * 
 * @param id 
 */
GraphEdge::GraphEdge(int id)
{
    _id = id;
    _parentNode=nullptr;
    _childNode=nullptr;
}

/**
 * set Child node
 * 
 * @param childNode 
 */
void GraphEdge::SetChildNode(GraphNode *childNode)
{
    _childNode = childNode;
}

/**
 * Set Parent node
 * 
 * @param parentNode 
 */
void GraphEdge::SetParentNode(GraphNode *parentNode)
{
    _parentNode = parentNode;
}

/**
 * Add Token
 * 
 * @param token 
 */
void GraphEdge::AddToken(std::string token)
{
    _keywords.push_back(token);
}