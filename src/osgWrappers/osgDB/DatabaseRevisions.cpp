// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/CopyOp>
#include <osg/Object>
#include <osgDB/DatabaseRevisions>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

TYPE_NAME_ALIAS(std::set< std::string >, osgDB::DatabaseRevision::FileNames)

BEGIN_OBJECT_REFLECTOR(osgDB::DatabaseRevision)
	I_DeclaringFile("osgDB/DatabaseRevisions");
	I_BaseType(osg::Object);
	I_Constructor0(____DatabaseRevision,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osgDB::DatabaseRevision &, revision, , IN, const osg::CopyOp, x, osg::CopyOp::SHALLOW_COPY,
	                           ____DatabaseRevision__C5_DatabaseRevision_R1__C5_osg_CopyOp,
	                           "",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "Clone the type of an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, x,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "Clone an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the object's library. ",
	          "Must be defined by derived classes. The OpenSceneGraph convention is that the namespace of a library is the same as the library name. ");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the object's class type. ",
	          "Must be defined by derived classes. ");
	I_Method1(void, setDatabasePath, IN, const std::string &, path,
	          Properties::NON_VIRTUAL,
	          __void__setDatabasePath__C5_std_string_R1,
	          "",
	          "");
	I_Method0(const std::string &, getDatabasePath,
	          Properties::NON_VIRTUAL,
	          __C5_std_string_R1__getDatabasePath,
	          "",
	          "");
	I_Method1(void, setFilesAdded, IN, osgDB::FileList *, fileList,
	          Properties::NON_VIRTUAL,
	          __void__setFilesAdded__FileList_P1,
	          "",
	          "");
	I_Method0(osgDB::FileList *, getFilesAdded,
	          Properties::NON_VIRTUAL,
	          __FileList_P1__getFilesAdded,
	          "",
	          "");
	I_Method0(const osgDB::FileList *, getFilesAdded,
	          Properties::NON_VIRTUAL,
	          __C5_FileList_P1__getFilesAdded,
	          "",
	          "");
	I_Method1(void, setFilesRemoved, IN, osgDB::FileList *, fileList,
	          Properties::NON_VIRTUAL,
	          __void__setFilesRemoved__FileList_P1,
	          "",
	          "");
	I_Method0(osgDB::FileList *, getFilesRemoved,
	          Properties::NON_VIRTUAL,
	          __FileList_P1__getFilesRemoved,
	          "",
	          "");
	I_Method0(const osgDB::FileList *, getFilesRemoved,
	          Properties::NON_VIRTUAL,
	          __C5_FileList_P1__getFilesRemoved,
	          "",
	          "");
	I_Method1(void, setFilesModified, IN, osgDB::FileList *, fileList,
	          Properties::NON_VIRTUAL,
	          __void__setFilesModified__FileList_P1,
	          "",
	          "");
	I_Method0(osgDB::FileList *, getFilesModified,
	          Properties::NON_VIRTUAL,
	          __FileList_P1__getFilesModified,
	          "",
	          "");
	I_Method0(const osgDB::FileList *, getFilesModified,
	          Properties::NON_VIRTUAL,
	          __C5_FileList_P1__getFilesModified,
	          "",
	          "");
	I_Method1(bool, isFileBlackListed, IN, const std::string &, filename,
	          Properties::NON_VIRTUAL,
	          __bool__isFileBlackListed__C5_std_string_R1,
	          "",
	          "");
	I_Method1(bool, removeFile, IN, const std::string &, filename,
	          Properties::NON_VIRTUAL,
	          __bool__removeFile__C5_std_string_R1,
	          "",
	          "");
	I_SimpleProperty(const std::string &, DatabasePath, 
	                 __C5_std_string_R1__getDatabasePath, 
	                 __void__setDatabasePath__C5_std_string_R1);
	I_SimpleProperty(osgDB::FileList *, FilesAdded, 
	                 __FileList_P1__getFilesAdded, 
	                 __void__setFilesAdded__FileList_P1);
	I_SimpleProperty(osgDB::FileList *, FilesModified, 
	                 __FileList_P1__getFilesModified, 
	                 __void__setFilesModified__FileList_P1);
	I_SimpleProperty(osgDB::FileList *, FilesRemoved, 
	                 __FileList_P1__getFilesRemoved, 
	                 __void__setFilesRemoved__FileList_P1);
END_REFLECTOR

TYPE_NAME_ALIAS(std::vector< osg::ref_ptr< osgDB::DatabaseRevision > >, osgDB::DatabaseRevisions::DatabaseRevisionList)

BEGIN_OBJECT_REFLECTOR(osgDB::DatabaseRevisions)
	I_DeclaringFile("osgDB/DatabaseRevisions");
	I_BaseType(osg::Object);
	I_Constructor0(____DatabaseRevisions,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osgDB::DatabaseRevisions &, revisions, , IN, const osg::CopyOp, x, osg::CopyOp::SHALLOW_COPY,
	                           ____DatabaseRevisions__C5_DatabaseRevisions_R1__C5_osg_CopyOp,
	                           "",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "Clone the type of an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, x,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "Clone an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the object's library. ",
	          "Must be defined by derived classes. The OpenSceneGraph convention is that the namespace of a library is the same as the library name. ");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the object's class type. ",
	          "Must be defined by derived classes. ");
	I_Method1(void, setDatabasePath, IN, const std::string &, path,
	          Properties::NON_VIRTUAL,
	          __void__setDatabasePath__C5_std_string_R1,
	          "",
	          "");
	I_Method0(const std::string &, getDatabasePath,
	          Properties::NON_VIRTUAL,
	          __C5_std_string_R1__getDatabasePath,
	          "",
	          "");
	I_Method1(void, addRevision, IN, osgDB::DatabaseRevision *, revision,
	          Properties::NON_VIRTUAL,
	          __void__addRevision__DatabaseRevision_P1,
	          "",
	          "");
	I_Method1(void, removeRevision, IN, osgDB::DatabaseRevision *, revision,
	          Properties::NON_VIRTUAL,
	          __void__removeRevision__DatabaseRevision_P1,
	          "",
	          "");
	I_Method1(osgDB::DatabaseRevision *, getDatabaseRevision, IN, unsigned int, i,
	          Properties::NON_VIRTUAL,
	          __DatabaseRevision_P1__getDatabaseRevision__unsigned_int,
	          "",
	          "");
	I_Method0(osgDB::DatabaseRevisions::DatabaseRevisionList &, getDatabaseRevisionList,
	          Properties::NON_VIRTUAL,
	          __DatabaseRevisionList_R1__getDatabaseRevisionList,
	          "",
	          "");
	I_Method0(const osgDB::DatabaseRevisions::DatabaseRevisionList &, getDatabaseRevisionList,
	          Properties::NON_VIRTUAL,
	          __C5_DatabaseRevisionList_R1__getDatabaseRevisionList,
	          "",
	          "");
	I_Method1(bool, isFileBlackListed, IN, const std::string &, filename,
	          Properties::NON_VIRTUAL,
	          __bool__isFileBlackListed__C5_std_string_R1,
	          "",
	          "");
	I_Method1(bool, removeFile, IN, const std::string &, filename,
	          Properties::NON_VIRTUAL,
	          __bool__removeFile__C5_std_string_R1,
	          "",
	          "");
	I_SimpleProperty(const std::string &, DatabasePath, 
	                 __C5_std_string_R1__getDatabasePath, 
	                 __void__setDatabasePath__C5_std_string_R1);
	I_SimpleProperty(osgDB::DatabaseRevisions::DatabaseRevisionList &, DatabaseRevisionList, 
	                 __DatabaseRevisionList_R1__getDatabaseRevisionList, 
	                 0);
END_REFLECTOR

TYPE_NAME_ALIAS(std::set< std::string >, osgDB::FileList::FileNames)

BEGIN_OBJECT_REFLECTOR(osgDB::FileList)
	I_DeclaringFile("osgDB/DatabaseRevisions");
	I_BaseType(osg::Object);
	I_Constructor0(____FileList,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osgDB::FileList &, fileList, , IN, const osg::CopyOp, x, osg::CopyOp::SHALLOW_COPY,
	                           ____FileList__C5_FileList_R1__C5_osg_CopyOp,
	                           "",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "Clone the type of an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, x,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "Clone an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the object's library. ",
	          "Must be defined by derived classes. The OpenSceneGraph convention is that the namespace of a library is the same as the library name. ");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the object's class type. ",
	          "Must be defined by derived classes. ");
	I_Method0(osgDB::FileList::FileNames &, getFileNames,
	          Properties::NON_VIRTUAL,
	          __FileNames_R1__getFileNames,
	          "",
	          "");
	I_Method0(const osgDB::FileList::FileNames &, getFileNames,
	          Properties::NON_VIRTUAL,
	          __C5_FileNames_R1__getFileNames,
	          "",
	          "");
	I_Method0(bool, empty,
	          Properties::NON_VIRTUAL,
	          __bool__empty,
	          "",
	          "");
	I_Method1(bool, containsFile, IN, const std::string &, filename,
	          Properties::NON_VIRTUAL,
	          __bool__containsFile__C5_std_string_R1,
	          "",
	          "");
	I_Method1(void, addFile, IN, const std::string &, filename,
	          Properties::NON_VIRTUAL,
	          __void__addFile__C5_std_string_R1,
	          "",
	          "");
	I_Method1(bool, removeFile, IN, const std::string &, filename,
	          Properties::NON_VIRTUAL,
	          __bool__removeFile__C5_std_string_R1,
	          "",
	          "");
	I_SimpleProperty(osgDB::FileList::FileNames &, FileNames, 
	                 __FileNames_R1__getFileNames, 
	                 0);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::ref_ptr< osgDB::DatabaseRevision >)
	I_DeclaringFile("osg/ref_ptr");
	I_Constructor0(____ref_ptr,
	               "",
	               "");
	I_Constructor1(IN, osgDB::DatabaseRevision *, ptr,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__T_P1,
	               "",
	               "");
	I_Constructor1(IN, const osg::ref_ptr< osgDB::DatabaseRevision > &, rp,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__C5_ref_ptr_R1,
	               "",
	               "");
	I_Method0(osgDB::DatabaseRevision *, get,
	          Properties::NON_VIRTUAL,
	          __T_P1__get,
	          "",
	          "");
	I_Method0(bool, valid,
	          Properties::NON_VIRTUAL,
	          __bool__valid,
	          "",
	          "");
	I_Method0(osgDB::DatabaseRevision *, release,
	          Properties::NON_VIRTUAL,
	          __T_P1__release,
	          "",
	          "");
	I_Method1(void, swap, IN, osg::ref_ptr< osgDB::DatabaseRevision > &, rp,
	          Properties::NON_VIRTUAL,
	          __void__swap__ref_ptr_R1,
	          "",
	          "");
	I_SimpleProperty(osgDB::DatabaseRevision *, , 
	                 __T_P1__get, 
	                 0);
END_REFLECTOR

STD_SET_REFLECTOR(std::set< std::string >)

STD_VECTOR_REFLECTOR(std::vector< osg::ref_ptr< osgDB::DatabaseRevision > >)
