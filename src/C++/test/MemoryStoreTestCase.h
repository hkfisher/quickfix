/* -*- C++ -*- */

/****************************************************************************
** Copyright (c) 2001-2004 quickfixengine.org  All rights reserved.
**
** This file is part of the QuickFIX FIX Engine
**
** This file may be distributed under the terms of the quickfixengine.org
** license as defined by quickfixengine.org and appearing in the file
** LICENSE included in the packaging of this file.
**
** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
**
** See http://www.quickfixengine.org/LICENSE for licensing information.
**
** Contact ask@quickfixengine.org if any conditions of this licensing are
** not clear to you.
**
****************************************************************************/

#ifndef FIX_MEMORYSTORETESTCASE_H
#define FIX_MEMORYSTORETESTCASE_H

#include <CPPTest/TestCase.h>
#include "MessageStoreTestCase.h"

namespace FIX
{
class MemoryStoreTestCase : public MessageStoreTestCase
{
public:
  MemoryStoreTestCase()
  {
    add( &m_setGet );
    add( &m_getRange );
    add( &m_other );
  }

private:
class setGet : public MessageStoreTestCase::setGet
  {
  public:
    setGet() { m_object = new MemoryStore(); }
  }
  m_setGet;

class getRange : public MessageStoreTestCase::getRange
  {
  public:
    getRange() { m_object = new MemoryStore(); }
  }
  m_getRange;

class other : public MessageStoreTestCase::other
  {
  public:
    other() { m_object = new MemoryStore(); }
  }
  m_other;
};
}

#endif //FIX_MEMORYSTORETESTCASE_H
