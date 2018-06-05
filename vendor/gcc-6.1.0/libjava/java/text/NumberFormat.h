
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_text_NumberFormat__
#define __java_text_NumberFormat__

#pragma interface

#include <java/text/Format.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace text
    {
        class FieldPosition;
        class NumberFormat;
        class ParsePosition;
    }
  }
}

class java::text::NumberFormat : public ::java::text::Format
{

public:
  virtual ::java::lang::String * format(jlong);
  virtual ::java::lang::StringBuffer * format(::java::lang::Object *, ::java::lang::StringBuffer *, ::java::text::FieldPosition *);
  virtual ::java::lang::StringBuffer * format(jdouble, ::java::lang::StringBuffer *, ::java::text::FieldPosition *) = 0;
  virtual ::java::lang::StringBuffer * format(jlong, ::java::lang::StringBuffer *, ::java::text::FieldPosition *) = 0;
  virtual jboolean equals(::java::lang::Object *);
  static JArray< ::java::util::Locale * > * getAvailableLocales();
private:
  static ::java::text::NumberFormat * computeInstance(::java::util::Locale *, ::java::lang::String *, ::java::lang::String *);
public:
  static ::java::text::NumberFormat * getCurrencyInstance();
  static ::java::text::NumberFormat * getCurrencyInstance(::java::util::Locale *);
  static ::java::text::NumberFormat * getInstance();
  static ::java::text::NumberFormat * getInstance(::java::util::Locale *);
  virtual jint getMaximumFractionDigits();
  virtual jint getMaximumIntegerDigits();
  virtual jint getMinimumFractionDigits();
  virtual jint getMinimumIntegerDigits();
  static ::java::text::NumberFormat * getNumberInstance();
  static ::java::text::NumberFormat * getNumberInstance(::java::util::Locale *);
  static ::java::text::NumberFormat * getIntegerInstance();
  static ::java::text::NumberFormat * getIntegerInstance(::java::util::Locale *);
  static ::java::text::NumberFormat * getPercentInstance();
  static ::java::text::NumberFormat * getPercentInstance(::java::util::Locale *);
  virtual jint hashCode();
  virtual jboolean isGroupingUsed();
  virtual jboolean isParseIntegerOnly();
public: // actually protected
  NumberFormat();
public:
  virtual ::java::lang::Number * parse(::java::lang::String *, ::java::text::ParsePosition *) = 0;
  virtual ::java::lang::Number * parse(::java::lang::String *);
  virtual ::java::lang::Object * parseObject(::java::lang::String *, ::java::text::ParsePosition *);
  virtual void setGroupingUsed(jboolean);
  virtual void setMaximumFractionDigits(jint);
  virtual void setMaximumIntegerDigits(jint);
  virtual void setMinimumFractionDigits(jint);
  virtual void setMinimumIntegerDigits(jint);
  virtual void setParseIntegerOnly(jboolean);
  virtual ::java::lang::String * format(jdouble);
private:
  void readObject(::java::io::ObjectInputStream *);
  void writeObject(::java::io::ObjectOutputStream *);
public:
  virtual ::java::util::Currency * getCurrency();
  virtual void setCurrency(::java::util::Currency *);
  static const jint INTEGER_FIELD = 0;
  static const jint FRACTION_FIELD = 1;
public: // actually package-private
  jboolean __attribute__((aligned(__alignof__( ::java::text::Format)))) groupingUsed;
  jint maximumFractionDigits;
private:
  jbyte maxFractionDigits;
public: // actually package-private
  jint maximumIntegerDigits;
private:
  jbyte maxIntegerDigits;
public: // actually package-private
  jint minimumFractionDigits;
private:
  jbyte minFractionDigits;
public: // actually package-private
  jint minimumIntegerDigits;
private:
  jbyte minIntegerDigits;
public: // actually package-private
  jboolean parseIntegerOnly;
private:
  jint serialVersionOnStream;
  static const jlong serialVersionUID = -2308460125733713944LL;
public:
  static ::java::lang::Class class$;
};

#endif // __java_text_NumberFormat__