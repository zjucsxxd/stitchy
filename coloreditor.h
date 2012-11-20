#ifndef _COLOREDITOR_H_
#define _COLOREDITOR_H_

#include <QDialog>
#include <QItemSelectionModel>

#include "ui_coloreditor.h"

class ColorManager;
class MetaColorManager;
class PaletteModel;

class ColorEditor : public QDialog
{
  Q_OBJECT;

 public:
  ColorEditor(MetaColorManager *cm, QWidget *parent = NULL);
  ~ColorEditor();

 private slots:
  void addColor();
  void removeColor();
  void moveUp();
  void moveDown();
  void selectColorSet(int index);
  void leftPaneDeselected();
  void rightPaneDeselected();
  void leftPaneSelected(const QItemSelection &selected,
                        const QItemSelection &deselected);
  void rightPaneSelected(const QItemSelection &selected,
                         const QItemSelection &deselected);

 private:
  Ui::ColorEditor ui_;
  MetaColorManager *colorManager_;
  ColorManager *myColors_;
  ColorManager *foreignColors_;
  PaletteModel *myModel_;
  PaletteModel *foreignModel_;
};

#endif
