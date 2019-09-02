// Copyright (c) 2011-2013 The Bitcoin developers
// Copyright (c) 2014-2020 The PIVX developers    
// Copyright (c) 2015-2020 The XUEZ developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_QT_TRANSACTIONDESCDIALOG_H
#define BITCOIN_QT_TRANSACTIONDESCDIALOG_H

#include <QDialog>

namespace Ui
{
class TransactionDescDialog;
}

QT_BEGIN_NAMESPACE
class QModelIndex;
QT_END_NAMESPACE

/** Dialog showing transaction details. */
class TransactionDescDialog : public QDialog
{
    Q_OBJECT

public:
    explicit TransactionDescDialog(const QModelIndex& idx, QWidget* parent = 0);
    ~TransactionDescDialog();

private:
    Ui::TransactionDescDialog* ui;
};

#endif // BITCOIN_QT_TRANSACTIONDESCDIALOG_H
