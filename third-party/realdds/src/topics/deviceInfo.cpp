// License: Apache 2.0. See LICENSE file in root directory.
// Copyright(c) 2022 Intel Corporation. All Rights Reserved.

/*!
 * @file deviceInfo.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace {
char dummy;
}  // namespace
#endif  // _WIN32

#include <realdds/topics/device-info/deviceInfo.h>
#include "deviceInfoTypeObject.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

realdds::topics::raw::device_info::device_info()
{
    // m_name com.eprosima.idl.parser.typecode.ArrayTypeCode@627551fb
    memset(&m_name, 0, (128) * 1);
    // m_serial_number com.eprosima.idl.parser.typecode.ArrayTypeCode@2b552920
    memset(&m_serial_number, 0, (32) * 1);
    // m_product_line com.eprosima.idl.parser.typecode.ArrayTypeCode@2758fe70
    memset(&m_product_line, 0, (16) * 1);
    // m_topic_root com.eprosima.idl.parser.typecode.ArrayTypeCode@1f36e637
    memset(&m_topic_root, 0, (256) * 1);
    // m_locked com.eprosima.idl.parser.typecode.PrimitiveTypeCode@551aa95a
    m_locked = false;

    // Just to register all known types
    registerdeviceInfoTypes();
}

realdds::topics::raw::device_info::~device_info()
{





}

realdds::topics::raw::device_info::device_info(
        const device_info& x)
{
    m_name = x.m_name;
    m_serial_number = x.m_serial_number;
    m_product_line = x.m_product_line;
    m_topic_root = x.m_topic_root;
    m_locked = x.m_locked;
}

realdds::topics::raw::device_info::device_info(
        device_info&& x)
{
    m_name = std::move(x.m_name);
    m_serial_number = std::move(x.m_serial_number);
    m_product_line = std::move(x.m_product_line);
    m_topic_root = std::move(x.m_topic_root);
    m_locked = x.m_locked;
}

realdds::topics::raw::device_info& realdds::topics::raw::device_info::operator =(
        const device_info& x)
{

    m_name = x.m_name;
    m_serial_number = x.m_serial_number;
    m_product_line = x.m_product_line;
    m_topic_root = x.m_topic_root;
    m_locked = x.m_locked;

    return *this;
}

realdds::topics::raw::device_info& realdds::topics::raw::device_info::operator =(
        device_info&& x)
{

    m_name = std::move(x.m_name);
    m_serial_number = std::move(x.m_serial_number);
    m_product_line = std::move(x.m_product_line);
    m_topic_root = std::move(x.m_topic_root);
    m_locked = x.m_locked;

    return *this;
}

bool realdds::topics::raw::device_info::operator ==(
        const device_info& x) const
{

    return (m_name == x.m_name && m_serial_number == x.m_serial_number && m_product_line == x.m_product_line && m_topic_root == x.m_topic_root && m_locked == x.m_locked);
}

bool realdds::topics::raw::device_info::operator !=(
        const device_info& x) const
{
    return !(*this == x);
}

size_t realdds::topics::raw::device_info::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += ((128) * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += ((32) * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += ((16) * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += ((256) * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);



    return current_alignment - initial_alignment;
}

size_t realdds::topics::raw::device_info::getCdrSerializedSize(
        const realdds::topics::raw::device_info& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    if ((128) > 0)
    {
        current_alignment += ((128) * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);
    }

    if ((32) > 0)
    {
        current_alignment += ((32) * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);
    }

    if ((16) > 0)
    {
        current_alignment += ((16) * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);
    }

    if ((256) > 0)
    {
        current_alignment += ((256) * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);
    }

    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);



    return current_alignment - initial_alignment;
}

void realdds::topics::raw::device_info::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_name;

    scdr << m_serial_number;

    scdr << m_product_line;

    scdr << m_topic_root;

    scdr << m_locked;

}

void realdds::topics::raw::device_info::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_name;

    dcdr >> m_serial_number;

    dcdr >> m_product_line;

    dcdr >> m_topic_root;

    dcdr >> m_locked;
}

/*!
 * @brief This function copies the value in member name
 * @param _name New value to be copied in member name
 */
void realdds::topics::raw::device_info::name(
        const std::array<char, 128>& _name)
{
    m_name = _name;
}

/*!
 * @brief This function moves the value in member name
 * @param _name New value to be moved in member name
 */
void realdds::topics::raw::device_info::name(
        std::array<char, 128>&& _name)
{
    m_name = std::move(_name);
}

/*!
 * @brief This function returns a constant reference to member name
 * @return Constant reference to member name
 */
const std::array<char, 128>& realdds::topics::raw::device_info::name() const
{
    return m_name;
}

/*!
 * @brief This function returns a reference to member name
 * @return Reference to member name
 */
std::array<char, 128>& realdds::topics::raw::device_info::name()
{
    return m_name;
}
/*!
 * @brief This function copies the value in member serial_number
 * @param _serial_number New value to be copied in member serial_number
 */
void realdds::topics::raw::device_info::serial_number(
        const std::array<char, 32>& _serial_number)
{
    m_serial_number = _serial_number;
}

/*!
 * @brief This function moves the value in member serial_number
 * @param _serial_number New value to be moved in member serial_number
 */
void realdds::topics::raw::device_info::serial_number(
        std::array<char, 32>&& _serial_number)
{
    m_serial_number = std::move(_serial_number);
}

/*!
 * @brief This function returns a constant reference to member serial_number
 * @return Constant reference to member serial_number
 */
const std::array<char, 32>& realdds::topics::raw::device_info::serial_number() const
{
    return m_serial_number;
}

/*!
 * @brief This function returns a reference to member serial_number
 * @return Reference to member serial_number
 */
std::array<char, 32>& realdds::topics::raw::device_info::serial_number()
{
    return m_serial_number;
}
/*!
 * @brief This function copies the value in member product_line
 * @param _product_line New value to be copied in member product_line
 */
void realdds::topics::raw::device_info::product_line(
        const std::array<char, 16>& _product_line)
{
    m_product_line = _product_line;
}

/*!
 * @brief This function moves the value in member product_line
 * @param _product_line New value to be moved in member product_line
 */
void realdds::topics::raw::device_info::product_line(
        std::array<char, 16>&& _product_line)
{
    m_product_line = std::move(_product_line);
}

/*!
 * @brief This function returns a constant reference to member product_line
 * @return Constant reference to member product_line
 */
const std::array<char, 16>& realdds::topics::raw::device_info::product_line() const
{
    return m_product_line;
}

/*!
 * @brief This function returns a reference to member product_line
 * @return Reference to member product_line
 */
std::array<char, 16>& realdds::topics::raw::device_info::product_line()
{
    return m_product_line;
}
/*!
 * @brief This function copies the value in member topic_root
 * @param _topic_root New value to be copied in member topic_root
 */
void realdds::topics::raw::device_info::topic_root(
        const std::array<char, 256>& _topic_root)
{
    m_topic_root = _topic_root;
}

/*!
 * @brief This function moves the value in member topic_root
 * @param _topic_root New value to be moved in member topic_root
 */
void realdds::topics::raw::device_info::topic_root(
        std::array<char, 256>&& _topic_root)
{
    m_topic_root = std::move(_topic_root);
}

/*!
 * @brief This function returns a constant reference to member topic_root
 * @return Constant reference to member topic_root
 */
const std::array<char, 256>& realdds::topics::raw::device_info::topic_root() const
{
    return m_topic_root;
}

/*!
 * @brief This function returns a reference to member topic_root
 * @return Reference to member topic_root
 */
std::array<char, 256>& realdds::topics::raw::device_info::topic_root()
{
    return m_topic_root;
}
/*!
 * @brief This function sets a value in member locked
 * @param _locked New value for member locked
 */
void realdds::topics::raw::device_info::locked(
        bool _locked)
{
    m_locked = _locked;
}

/*!
 * @brief This function returns the value of member locked
 * @return Value of member locked
 */
bool realdds::topics::raw::device_info::locked() const
{
    return m_locked;
}

/*!
 * @brief This function returns a reference to member locked
 * @return Reference to member locked
 */
bool& realdds::topics::raw::device_info::locked()
{
    return m_locked;
}


size_t realdds::topics::raw::device_info::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;








    return current_align;
}

bool realdds::topics::raw::device_info::isKeyDefined()
{
    return false;
}

void realdds::topics::raw::device_info::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
         
}



