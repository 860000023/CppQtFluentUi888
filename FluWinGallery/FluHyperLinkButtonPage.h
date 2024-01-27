#pragma once

#include "FluAEmptyPage.h"
#include "../FluUtils/FluUtils.h"
#include "../FluControls/FluHyperLinkButton.h"
#include "../FluControls/FluDisplayBox.h"
#include "../FluControls/FluVScrollView.h"

class FluHyperLinkButtonPage : public FluAEmptyPage
{
    Q_OBJECT
  public:
    FluHyperLinkButtonPage(QWidget* parent = nullptr) : FluAEmptyPage(parent)
    {
        m_mainLayout->setAlignment(Qt::AlignTop);
        m_titleLabel->setText("HyperLinkButtonPage");
        m_infoLabel->setText(
            "A HyperlinkButton appears as a text hyperlink. When a user clicks it, it opens the page you specify in the uri property in the default browser.Or your can handle its Click event, typically to navigate within your app.");
        FluStyleSheetUitls::setQssByFileName("../StyleSheet/light/FluHyperLinkButtonPage.qss", this);

        auto displayBox1 = new FluDisplayBox;
        displayBox1->setTitle("A hyperlink button with a Url.");
        displayBox1->getCodeExpander()->setCodeByPath("../code/HyperLinkButtonPageCode1");

        auto btn1 = new FluHyperLinkButton("https://github.com/mowangshuying/CppQtFluentUi888");
        btn1->setText("CppQtFluentUi888 Repo Url");
        btn1->setFixedWidth(200);

        displayBox1->setBodyWidgetFixedHeight(66);
        displayBox1->getBodyLayout()->addWidget(btn1);
        m_vScrollView->getMainLayout()->addWidget(displayBox1, 0, Qt::AlignTop);
    }
};
