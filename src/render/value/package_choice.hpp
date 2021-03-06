//+----------------------------------------------------------------------------+
//| Description:  Magic Set Editor - Program to make Magic (tm) cards          |
//| Copyright:    (C) Twan van Laarhoven and the other MSE developers          |
//| License:      GNU General Public License 2 or later (see file COPYING)     |
//+----------------------------------------------------------------------------+

#pragma once

// ----------------------------------------------------------------------------- : Includes

#include <util/prec.hpp>
#include <render/value/viewer.hpp>
#include <data/field/package_choice.hpp>

// ----------------------------------------------------------------------------- : PackageChoiceValueViewer

/// Viewer that displays a package choice value
class PackageChoiceValueViewer : public ValueViewer {
public:
  DECLARE_VALUE_VIEWER(PackageChoice) : ValueViewer(parent,style) { initItems(); }
  
  void draw(RotatedDC& dc) override;
  
  struct Item{
    String package_name;
    String name;
    Bitmap image;
  };
protected:
  vector<Item> items;
private:
  void initItems();
  struct ComparePackagePosHint;
};

