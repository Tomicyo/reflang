// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// !!! This file is auto-generated by Reflang. !!!
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
#ifndef REFLANG_METADATA_STATIC_FIELDS_GEN_HPP
#define REFLANG_METADATA_STATIC_FIELDS_GEN_HPP

#include <string>

#include "lib/reflang.hpp"
#include "static-fields.src.hpp"

namespace reflang
{


template <>
class Class<MyClass> : public IClass
{
public:
	static const constexpr int FieldCount = 0;
	static const constexpr int StaticFieldCount = 15;
	static const constexpr int MethodCount = 0;
	static const constexpr int StaticMethodCount = 0;

	int GetFieldCount() const override;
	Reference GetField(
			const Reference& o, const std::string& name) const override;

	int GetStaticFieldCount() const override;
	Reference GetStaticField(const std::string& name) const override;

	int GetMethodCount() const override;
	std::vector<std::unique_ptr<IMethod>> GetMethod(
			const std::string& name) const override;

	int GetStaticMethodCount() const override;
	std::vector<std::unique_ptr<IFunction>> GetStaticMethod(
			const std::string& name) const override;

	const std::string& GetName() const override;

	// Calls T::operator() on each field of 'MyClass'.
	// Works well with C++14 generic lambdas.
	template <typename T>
	static void IterateFields(const MyClass& c, T t);

	template <typename T>
	static void IterateFields(MyClass& c, T t);

	template <typename T>
	static void IterateStaticFields(T t);
};

template <typename T>
void Class<MyClass>::IterateFields(const MyClass& c, T t)
{
}

template <typename T>
void Class<MyClass>::IterateFields(MyClass& c, T t)
{
}

template <typename T>
void Class<MyClass>::IterateStaticFields(T t)
{
	t(MyClass::var);
	t(MyClass::const_var);
	t(MyClass::pointer_var);
	t(MyClass::const_pointer_var);
	t(MyClass::const_pointer_const_var);
	t(MyClass::ref_var);
	t(MyClass::const_ref_var);
	t(MyClass::constexpr_var);
	t(MyClass::complex);
	t(MyClass::const_complex);
	t(MyClass::pointer_complex);
	t(MyClass::const_pointer_complex);
	t(MyClass::const_pointer_const_complex);
	t(MyClass::ref_complex);
	t(MyClass::const_ref_complex);
}




}  // namespace reflang

#endif //REFLANG_METADATA_STATIC_FIELDS_GEN_HPP
