// This defines the interface to the QsciLexerFni class.
//
// Copyright (c) 2010 Riverbank Computing Limited <info@riverbankcomputing.com>
// 
// This file is part of QScintilla.
// 
// This file may be used under the terms of the GNU General Public
// License versions 2.0 or 3.0 as published by the Free Software
// Foundation and appearing in the files LICENSE.GPL2 and LICENSE.GPL3
// included in the packaging of this file.  Alternatively you may (at
// your option) use any later version of the GNU General Public
// License if such license has been publicly approved by Riverbank
// Computing Limited (or its successors, if any) and the KDE Free Qt
// Foundation. In addition, as a special exception, Riverbank gives you
// certain additional rights. These rights are described in the Riverbank
// GPL Exception version 1.1, which can be found in the file
// GPL_EXCEPTION.txt in this package.
// 
// Please review the following information to ensure GNU General
// Public Licensing requirements will be met:
// http://trolltech.com/products/qt/licenses/licensing/opensource/. If
// you are unsure which license is appropriate for your use, please
// review the following information:
// http://trolltech.com/products/qt/licenses/licensing/licensingoverview
// or contact the sales department at sales@riverbankcomputing.com.
// 
// This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
// WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.


#ifndef QSCILEXERFNI_H
#define QSCILEXERFNI_H

#ifdef __APPLE__
extern "C++" {
#endif

#include <qobject.h>

#include <QsciPS3/qsciglobal.h>
#include <QsciPS3/qscilexer.h>


//! \brief The QsciLexerFni class encapsulates the Scintilla
//! Fni lexer.
class QSCINTILLA_EXPORT QsciLexerFni : public QsciLexer
{
    Q_OBJECT

public:
    //! This enum defines the meanings of the different styles used by the
    //! Properties lexer.
    enum {
        //! The default.
        Default = 0,

        //! A comment.
        Comment = 1,

        //! A command group.
        Group = 2,

        //! A console command.
        Command = 3,

        //! An operator.
        Operator = 4
    };

    //! Construct a QsciLexerFni with parent \a parent.  \a parent is
    //! typically the QsciScintilla instance.
    QsciLexerFni(QObject *parent = 0);

    //! Destroys the QsciLexerFni instance.
    virtual ~QsciLexerFni();

    //! Returns the name of the language.
    const char *language() const;

    //! Returns the name of the lexer.  Some lexers support a number of
    //! languages.
    const char *lexer() const;

    //! \internal Returns the string of characters that comprise a word.
    const char *wordCharacters() const;

    //! Returns the foreground colour of the text for style number \a style.
    //!
    //! \sa defaultPaper()
    QColor defaultColor(int style) const;

    //! Returns the descriptive name for style number \a style.  If the
    //! style is invalid for this language then an empty QString is returned.
    //! This is intended to be used in user preference dialogs.
    QString description(int style) const;

private:
    QsciLexerFni(const QsciLexerFni &);
    QsciLexerFni &operator=(const QsciLexerFni &);
};

#ifdef __APPLE__
}
#endif

#endif
