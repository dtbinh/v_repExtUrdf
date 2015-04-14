/********************************************************************************
** Form generated from reading UI file 'urdfdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_URDFDIALOG_H
#define UI_URDFDIALOG_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CUrdfDialog
{
public:
    QPushButton *qqImport;
    QCheckBox *qqCenterModel;
    QCheckBox *qqAlternateMasks;
    QCheckBox *qqConvexDecomposeDlg;
    QCheckBox *qqConvexDecompose;
    QCheckBox *qqCreateVisualLinks;
    QCheckBox *qqCollisionLinksHidden;
    QCheckBox *qqModelDefinition;
    QCheckBox *qqJointsHidden;
    QCheckBox *qqPositionCtrl;
    QLabel *label;

    void setupUi(QDialog *CUrdfDialog)
    {
        if (CUrdfDialog->objectName().isEmpty())
            CUrdfDialog->setObjectName(QStringLiteral("CUrdfDialog"));
        CUrdfDialog->resize(311, 324);
        CUrdfDialog->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        qqImport = new QPushButton(CUrdfDialog);
        qqImport->setObjectName(QStringLiteral("qqImport"));
        qqImport->setGeometry(QRect(220, 200, 75, 23));
        qqCenterModel = new QCheckBox(CUrdfDialog);
        qqCenterModel->setObjectName(QStringLiteral("qqCenterModel"));
        qqCenterModel->setGeometry(QRect(10, 110, 271, 17));
        qqAlternateMasks = new QCheckBox(CUrdfDialog);
        qqAlternateMasks->setObjectName(QStringLiteral("qqAlternateMasks"));
        qqAlternateMasks->setGeometry(QRect(10, 150, 271, 17));
        qqConvexDecomposeDlg = new QCheckBox(CUrdfDialog);
        qqConvexDecomposeDlg->setObjectName(QStringLiteral("qqConvexDecomposeDlg"));
        qqConvexDecomposeDlg->setGeometry(QRect(10, 70, 271, 17));
        qqConvexDecompose = new QCheckBox(CUrdfDialog);
        qqConvexDecompose->setObjectName(QStringLiteral("qqConvexDecompose"));
        qqConvexDecompose->setGeometry(QRect(10, 50, 271, 17));
        qqCreateVisualLinks = new QCheckBox(CUrdfDialog);
        qqCreateVisualLinks->setObjectName(QStringLiteral("qqCreateVisualLinks"));
        qqCreateVisualLinks->setGeometry(QRect(10, 90, 271, 17));
        qqCollisionLinksHidden = new QCheckBox(CUrdfDialog);
        qqCollisionLinksHidden->setObjectName(QStringLiteral("qqCollisionLinksHidden"));
        qqCollisionLinksHidden->setGeometry(QRect(10, 10, 271, 17));
        qqModelDefinition = new QCheckBox(CUrdfDialog);
        qqModelDefinition->setObjectName(QStringLiteral("qqModelDefinition"));
        qqModelDefinition->setGeometry(QRect(10, 130, 271, 17));
        qqJointsHidden = new QCheckBox(CUrdfDialog);
        qqJointsHidden->setObjectName(QStringLiteral("qqJointsHidden"));
        qqJointsHidden->setGeometry(QRect(10, 30, 271, 17));
        qqPositionCtrl = new QCheckBox(CUrdfDialog);
        qqPositionCtrl->setObjectName(QStringLiteral("qqPositionCtrl"));
        qqPositionCtrl->setGeometry(QRect(10, 170, 291, 17));
        label = new QLabel(CUrdfDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 240, 291, 71));
        label->setWordWrap(true);
        QWidget::setTabOrder(qqCollisionLinksHidden, qqJointsHidden);
        QWidget::setTabOrder(qqJointsHidden, qqConvexDecompose);
        QWidget::setTabOrder(qqConvexDecompose, qqConvexDecomposeDlg);
        QWidget::setTabOrder(qqConvexDecomposeDlg, qqCreateVisualLinks);
        QWidget::setTabOrder(qqCreateVisualLinks, qqCenterModel);
        QWidget::setTabOrder(qqCenterModel, qqModelDefinition);
        QWidget::setTabOrder(qqModelDefinition, qqAlternateMasks);
        QWidget::setTabOrder(qqAlternateMasks, qqImport);

        retranslateUi(CUrdfDialog);

        QMetaObject::connectSlotsByName(CUrdfDialog);
    } // setupUi

    void retranslateUi(QDialog *CUrdfDialog)
    {
        CUrdfDialog->setWindowTitle(QApplication::translate("CUrdfDialog", "URDF Import", 0));
        qqImport->setText(QApplication::translate("CUrdfDialog", "Import", 0));
        qqCenterModel->setText(QApplication::translate("CUrdfDialog", "Center model above ground", 0));
        qqAlternateMasks->setText(QApplication::translate("CUrdfDialog", "Alternate local respondable masks", 0));
        qqConvexDecomposeDlg->setText(QApplication::translate("CUrdfDialog", "Show convex decomposition dialog", 0));
        qqConvexDecompose->setText(QApplication::translate("CUrdfDialog", "Convex decompose non-convex collision links", 0));
        qqCreateVisualLinks->setText(QApplication::translate("CUrdfDialog", "Create visual links if none", 0));
        qqCollisionLinksHidden->setText(QApplication::translate("CUrdfDialog", "Assign collision links to layer 9 ", 0));
        qqModelDefinition->setText(QApplication::translate("CUrdfDialog", "Prepare model definition if feasable", 0));
        qqJointsHidden->setText(QApplication::translate("CUrdfDialog", "Assign joints to layer 10", 0));
        qqPositionCtrl->setText(QApplication::translate("CUrdfDialog", "Enable position control for revolute and prismatic joints", 0));
        label->setText(QApplication::translate("CUrdfDialog", "If you experience a sudden crash during the import operation, make sure to enable 'Show convex decomposition dialog' and adjust the parameters there. Another option would be to simply disable 'Convex decompose non-convex collision links'.", 0));
    } // retranslateUi

};

namespace Ui {
    class CUrdfDialog: public Ui_CUrdfDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_URDFDIALOG_H
