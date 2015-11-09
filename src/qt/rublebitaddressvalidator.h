// Copyright (c) 2011-2013 The RubleBit developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef RUBLEBITADDRESSVALIDATOR_H
#define RUBLEBITADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator.
   Corrects near-miss characters and refuses characters that are not part of base58.
 */
class RubleBitAddressValidator : public QValidator
{
    Q_OBJECT

public:
    explicit RubleBitAddressValidator(QObject *parent = 0);

    State validate(QString &input, int &pos) const;

    static const int MaxAddressLength = 35;
};

#endif // RUBLEBITADDRESSVALIDATOR_H
