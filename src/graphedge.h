/**
 * @file graphedge.h
 * @author Stephen Welch, Susanna Maria
 * @brief graphedge class definition
 * @version 0.1
 * @date 2020-06-30
 * 
 * @copyright MIT License
 * 
 */

#ifndef GRAPHEDGE_H_
#define GRAPHEDGE_H_

#include <vector>
#include <string>

class GraphNode; // forward declaration

/**
 * Graphedge class
 * 
 */
class GraphEdge
{
private:
    // data handles (not owned)
    GraphNode *_childNode;
    GraphNode *_parentNode;

    // proprietary members
    int _id;
    std::vector<std::string> _keywords; // list of topics associated with this edge
    

public:
    // constructor / desctructor
    // https://stackoverflow.com/questions/121162/what-does-the-explicit-keyword-mean
    explicit GraphEdge(int id);

    // getter / setter
    int GetID() { return _id; }
    void SetChildNode(GraphNode *childNode);
    void SetParentNode(GraphNode *parentNode);
    GraphNode *GetChildNode() { return _childNode; }
    std::vector<std::string> GetKeywords() { return _keywords; }

    // proprietary functions
    void AddToken(std::string token);
};

#endif /* GRAPHEDGE_H_ */
