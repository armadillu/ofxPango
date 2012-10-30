#ifndef OFXPCPANGOLAYOUTH
#define OFXPCPANGOLAYOUTH

#include <string>
#include <pango/pangocairo.h>
#include "ofImage.h"
class ofxPCPangoFontDescription;
class ofxPCContext;
class ofxPCPangoLayout {
public:
	ofxPCPangoLayout(ofxPCContext* pContext);
	~ofxPCPangoLayout();
	
	unsigned char* getPixels();
	ofImage getImage();
	void setJustify(bool bJustify);
	void setWidth(int nWidth);
	void setText(std::string sText);
	void setText(const char* pText, int nLen = -1);
	void setMarkup(std::string sText);
	void setMarkup(const char* pText, int nLen = -1);
	void show(); // not sure if this is the best location for this function
	void setFontDescription(ofxPCPangoFontDescription oFont);
	int getWidth();
	int getHeight();
	float getTextHeight();
	void setFont(std::string sFontDesc);
	void fill(float fR, float fG, float fB, float fA = 1.0f);
	void setTextColor(float fR, float fG, float fB, float fA = 1.0f); 
	
	void setPangoAlign(int _pangoalign);
	void setAlignLeft();
	void setAlignRight();
	void setAlignCenter();
	
	// RR new 10.Juli 2012
	void setSpacing(int _spacing);
	void setSingleParagraphMode(bool single);
	void setTabs(vector<int> _tabpositions);
	void setIndent(int _indent);
	
	
	ofPoint getPixelSize();
	PangoRectangle getPixelExtents();
	ofxPCContext* context;
	PangoLayout* pa_layout;
	
private:
};
#endif