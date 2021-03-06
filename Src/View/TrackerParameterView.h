#ifndef TRACKERPARAMETERVIEW_H
#define TRACKERPARAMETERVIEW_H

#include "Interfaces/IView/IViewWidget.h"
#include "../Model/TrackerParameter.h"

namespace Ui {
	class TrackerParameterView;
}

class TrackerParameterView : public IViewWidget
{
    Q_OBJECT

public:
    explicit TrackerParameterView(QWidget *parent = 0, IController *controller = 0, IModel *model = 0);
    ~TrackerParameterView();

private slots:
	void on_pushButton_clicked();
	void on_pushButtonResetBackground_clicked();
	void on_comboBoxSendImage_currentIndexChanged(int v);

	
public:
	signals:
    void trackingAreaType(int v);
    void parametersChanged();

private:
    Ui::TrackerParameterView *_ui;

    // IViewWidget interface
public slots:

    void getNotified();
};

#endif // TRACKERPARAMETERVIEW_H
