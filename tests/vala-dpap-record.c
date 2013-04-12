/* vala-dpap-record.c generated by valac 0.18.1, the Vala compiler
 * generated from vala-dpap-record.vala, do not modify */

/*   FILE: vala-dpap-record.vala -- A DPAPRecord implementation in Vala
 * AUTHOR: W. Michael Petullo <mike@flyn.org>
 *   DATE: 21 December 2010
 *
 * Copyright (c) 2010 W. Michael Petullo <new@flyn.org>
 * All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#include <glib.h>
#include <glib-object.h>
#include <libdmapsharing/dmap.h>
#include <stdlib.h>
#include <string.h>
#include <gio/gio.h>
#include <glib/gstdio.h>


#define TYPE_VALA_DPAP_RECORD (vala_dpap_record_get_type ())
#define VALA_DPAP_RECORD(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_VALA_DPAP_RECORD, ValaDPAPRecord))
#define VALA_DPAP_RECORD_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_VALA_DPAP_RECORD, ValaDPAPRecordClass))
#define IS_VALA_DPAP_RECORD(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_VALA_DPAP_RECORD))
#define IS_VALA_DPAP_RECORD_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_VALA_DPAP_RECORD))
#define VALA_DPAP_RECORD_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_VALA_DPAP_RECORD, ValaDPAPRecordClass))

typedef struct _ValaDPAPRecord ValaDPAPRecord;
typedef struct _ValaDPAPRecordClass ValaDPAPRecordClass;
typedef struct _ValaDPAPRecordPrivate ValaDPAPRecordPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_byte_array_free0(var) ((var == NULL) ? NULL : (var = (g_byte_array_free (var, TRUE), NULL)))

#define TYPE_VALA_DPAP_RECORD_FACTORY (vala_dpap_record_factory_get_type ())
#define VALA_DPAP_RECORD_FACTORY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_VALA_DPAP_RECORD_FACTORY, ValaDPAPRecordFactory))
#define VALA_DPAP_RECORD_FACTORY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_VALA_DPAP_RECORD_FACTORY, ValaDPAPRecordFactoryClass))
#define IS_VALA_DPAP_RECORD_FACTORY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_VALA_DPAP_RECORD_FACTORY))
#define IS_VALA_DPAP_RECORD_FACTORY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_VALA_DPAP_RECORD_FACTORY))
#define VALA_DPAP_RECORD_FACTORY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_VALA_DPAP_RECORD_FACTORY, ValaDPAPRecordFactoryClass))

typedef struct _ValaDPAPRecordFactory ValaDPAPRecordFactory;
typedef struct _ValaDPAPRecordFactoryClass ValaDPAPRecordFactoryClass;
typedef struct _ValaDPAPRecordFactoryPrivate ValaDPAPRecordFactoryPrivate;

struct _ValaDPAPRecord {
	GObject parent_instance;
	ValaDPAPRecordPrivate * priv;
};

struct _ValaDPAPRecordClass {
	GObjectClass parent_class;
};

struct _ValaDPAPRecordPrivate {
	gchar* _location;
	gchar* _filename;
	gchar* _aspect_ratio;
	gchar* _format;
	gchar* _comments;
	GByteArray* _thumbnail;
	gint _large_filesize;
	gint _pixel_height;
	gint _pixel_width;
	gint _rating;
	gint _creation_date;
};

struct _ValaDPAPRecordFactory {
	GObject parent_instance;
	ValaDPAPRecordFactoryPrivate * priv;
};

struct _ValaDPAPRecordFactoryClass {
	GObjectClass parent_class;
};


static gpointer vala_dpap_record_parent_class = NULL;
static DMAPRecordIface* vala_dpap_record_dmap_record_parent_iface = NULL;
static DPAPRecordIface* vala_dpap_record_dpap_record_parent_iface = NULL;
static gpointer vala_dpap_record_factory_parent_class = NULL;
static DMAPRecordFactoryIface* vala_dpap_record_factory_dmap_record_factory_parent_iface = NULL;

GType vala_dpap_record_get_type (void) G_GNUC_CONST;
#define VALA_DPAP_RECORD_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), TYPE_VALA_DPAP_RECORD, ValaDPAPRecordPrivate))
enum  {
	VALA_DPAP_RECORD_DUMMY_PROPERTY,
	VALA_DPAP_RECORD_LOCATION,
	VALA_DPAP_RECORD_FILENAME,
	VALA_DPAP_RECORD_ASPECT_RATIO,
	VALA_DPAP_RECORD_FORMAT,
	VALA_DPAP_RECORD_THUMBNAIL,
	VALA_DPAP_RECORD_COMMENTS,
	VALA_DPAP_RECORD_LARGE_FILESIZE,
	VALA_DPAP_RECORD_PIXEL_HEIGHT,
	VALA_DPAP_RECORD_PIXEL_WIDTH,
	VALA_DPAP_RECORD_RATING,
	VALA_DPAP_RECORD_CREATION_DATE
};
static GInputStream* vala_dpap_record_real_read (DPAPRecord* base, GError** error);
static DMAPRecord* vala_dpap_record_real_set_from_blob (DMAPRecord* base, GByteArray* blob);
static GByteArray* vala_dpap_record_real_to_blob (DMAPRecord* base);
ValaDPAPRecord* vala_dpap_record_new (void);
ValaDPAPRecord* vala_dpap_record_construct (GType object_type);
const gchar* vala_dpap_record_get_location (ValaDPAPRecord* self);
void vala_dpap_record_set_location (ValaDPAPRecord* self, const gchar* value);
const gchar* vala_dpap_record_get_filename (ValaDPAPRecord* self);
void vala_dpap_record_set_filename (ValaDPAPRecord* self, const gchar* value);
const gchar* vala_dpap_record_get_aspect_ratio (ValaDPAPRecord* self);
void vala_dpap_record_set_aspect_ratio (ValaDPAPRecord* self, const gchar* value);
const gchar* vala_dpap_record_get_format (ValaDPAPRecord* self);
void vala_dpap_record_set_format (ValaDPAPRecord* self, const gchar* value);
GByteArray* vala_dpap_record_get_thumbnail (ValaDPAPRecord* self);
void vala_dpap_record_set_thumbnail (ValaDPAPRecord* self, GByteArray* value);
const gchar* vala_dpap_record_get_comments (ValaDPAPRecord* self);
void vala_dpap_record_set_comments (ValaDPAPRecord* self, const gchar* value);
gint vala_dpap_record_get_large_filesize (ValaDPAPRecord* self);
void vala_dpap_record_set_large_filesize (ValaDPAPRecord* self, gint value);
gint vala_dpap_record_get_pixel_height (ValaDPAPRecord* self);
void vala_dpap_record_set_pixel_height (ValaDPAPRecord* self, gint value);
gint vala_dpap_record_get_pixel_width (ValaDPAPRecord* self);
void vala_dpap_record_set_pixel_width (ValaDPAPRecord* self, gint value);
gint vala_dpap_record_get_rating (ValaDPAPRecord* self);
void vala_dpap_record_set_rating (ValaDPAPRecord* self, gint value);
gint vala_dpap_record_get_creation_date (ValaDPAPRecord* self);
void vala_dpap_record_set_creation_date (ValaDPAPRecord* self, gint value);
static void vala_dpap_record_finalize (GObject* obj);
static void _vala_vala_dpap_record_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_vala_dpap_record_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);
GType vala_dpap_record_factory_get_type (void) G_GNUC_CONST;
enum  {
	VALA_DPAP_RECORD_FACTORY_DUMMY_PROPERTY
};
static DMAPRecord* vala_dpap_record_factory_real_create (DMAPRecordFactory* base, void* user_data);
ValaDPAPRecordFactory* vala_dpap_record_factory_new (void);
ValaDPAPRecordFactory* vala_dpap_record_factory_construct (GType object_type);


static GInputStream* vala_dpap_record_real_read (DPAPRecord* base, GError** error) {
	ValaDPAPRecord * self;
	GInputStream* result = NULL;
	self = (ValaDPAPRecord*) base;
	g_error ("vala-dpap-record.vala:95: read not implemented");
	return result;
}


static DMAPRecord* vala_dpap_record_real_set_from_blob (DMAPRecord* base, GByteArray* blob) {
	ValaDPAPRecord * self;
	DMAPRecord* result = NULL;
	self = (ValaDPAPRecord*) base;
	g_return_val_if_fail (blob != NULL, NULL);
	g_error ("vala-dpap-record.vala:99: set_from_blob not implemented");
	return result;
}


static GByteArray* vala_dpap_record_real_to_blob (DMAPRecord* base) {
	ValaDPAPRecord * self;
	GByteArray* result = NULL;
	self = (ValaDPAPRecord*) base;
	g_error ("vala-dpap-record.vala:103: to_blob not implemented");
	return result;
}


ValaDPAPRecord* vala_dpap_record_construct (GType object_type) {
	ValaDPAPRecord * self = NULL;
	gchar* _tmp0_ = NULL;
	gchar* _tmp1_;
	gchar* _tmp2_;
	gchar* _tmp3_;
	gchar* _tmp4_;
	gchar* _tmp5_;
	const gchar* _tmp6_;
	gchar* _tmp7_ = NULL;
	gchar* _tmp8_;
	gchar* _tmp9_;
	gchar* _tmp10_ = NULL;
	gchar* _tmp11_;
	gchar* _tmp12_;
	gchar* _tmp13_;
	gchar* path;
	guint8* data = NULL;
	gint data_length1 = 0;
	gint _data_size_ = 0;
	guint8* _tmp14_ = NULL;
	size_t _tmp15_;
	GByteArray* _tmp16_;
	GByteArray* _tmp17_;
	GError * _inner_error_ = NULL;
	self = (ValaDPAPRecord*) g_object_new (object_type, NULL);
	_tmp0_ = g_get_current_dir ();
	_tmp1_ = _tmp0_;
	_tmp2_ = g_strconcat ("file://", _tmp1_, NULL);
	_tmp3_ = _tmp2_;
	_tmp4_ = g_strconcat (_tmp3_, "/media/test.jpeg", NULL);
	_g_free0 (self->priv->_location);
	self->priv->_location = _tmp4_;
	_g_free0 (_tmp3_);
	_g_free0 (_tmp1_);
	_tmp5_ = g_strdup ("1.333");
	_g_free0 (self->priv->_aspect_ratio);
	self->priv->_aspect_ratio = _tmp5_;
	_tmp6_ = self->priv->_location;
	_tmp7_ = g_path_get_basename (_tmp6_);
	_g_free0 (self->priv->_filename);
	self->priv->_filename = _tmp7_;
	_tmp8_ = g_strdup ("JPEG");
	_g_free0 (self->priv->_format);
	self->priv->_format = _tmp8_;
	_tmp9_ = g_strdup ("Comments");
	_g_free0 (self->priv->_comments);
	self->priv->_comments = _tmp9_;
	self->priv->_large_filesize = 13953;
	self->priv->_pixel_height = 480;
	self->priv->_pixel_width = 640;
	self->priv->_rating = 5;
	self->priv->_creation_date = 0;
	_tmp10_ = g_get_current_dir ();
	_tmp11_ = _tmp10_;
	_tmp12_ = g_strconcat (_tmp11_, "/media/test.jpeg", NULL);
	_tmp13_ = _tmp12_;
	_g_free0 (_tmp11_);
	path = _tmp13_;
	g_file_get_contents (path, (gchar**) (&_tmp14_), &_tmp15_, &_inner_error_);
	data = (g_free (data), NULL);
	data = _tmp14_;
	data_length1 = _tmp15_;
	_data_size_ = data_length1;
	if (_inner_error_ != NULL) {
		data = (g_free (data), NULL);
		_g_free0 (path);
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return NULL;
	}
	_tmp16_ = g_byte_array_new ();
	_g_byte_array_free0 (self->priv->_thumbnail);
	self->priv->_thumbnail = _tmp16_;
	_tmp17_ = self->priv->_thumbnail;
	g_byte_array_append (_tmp17_, data, data_length1);
	data = (g_free (data), NULL);
	_g_free0 (path);
	return self;
}


ValaDPAPRecord* vala_dpap_record_new (void) {
	return vala_dpap_record_construct (TYPE_VALA_DPAP_RECORD);
}


const gchar* vala_dpap_record_get_location (ValaDPAPRecord* self) {
	const gchar* result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_location;
	result = _tmp0_;
	return result;
}


void vala_dpap_record_set_location (ValaDPAPRecord* self, const gchar* value) {
	const gchar* _tmp0_;
	gchar* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->_location);
	self->priv->_location = _tmp1_;
	g_object_notify ((GObject *) self, "location");
}


const gchar* vala_dpap_record_get_filename (ValaDPAPRecord* self) {
	const gchar* result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_filename;
	result = _tmp0_;
	return result;
}


void vala_dpap_record_set_filename (ValaDPAPRecord* self, const gchar* value) {
	const gchar* _tmp0_;
	gchar* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->_filename);
	self->priv->_filename = _tmp1_;
	g_object_notify ((GObject *) self, "filename");
}


const gchar* vala_dpap_record_get_aspect_ratio (ValaDPAPRecord* self) {
	const gchar* result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_aspect_ratio;
	result = _tmp0_;
	return result;
}


void vala_dpap_record_set_aspect_ratio (ValaDPAPRecord* self, const gchar* value) {
	const gchar* _tmp0_;
	gchar* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->_aspect_ratio);
	self->priv->_aspect_ratio = _tmp1_;
	g_object_notify ((GObject *) self, "aspect-ratio");
}


const gchar* vala_dpap_record_get_format (ValaDPAPRecord* self) {
	const gchar* result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_format;
	result = _tmp0_;
	return result;
}


void vala_dpap_record_set_format (ValaDPAPRecord* self, const gchar* value) {
	const gchar* _tmp0_;
	gchar* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->_format);
	self->priv->_format = _tmp1_;
	g_object_notify ((GObject *) self, "format");
}


GByteArray* vala_dpap_record_get_thumbnail (ValaDPAPRecord* self) {
	GByteArray* result;
	GByteArray* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_thumbnail;
	result = _tmp0_;
	return result;
}


void vala_dpap_record_set_thumbnail (ValaDPAPRecord* self, GByteArray* value) {
	GByteArray* _tmp0_;
	GByteArray* _tmp1_;
	GByteArray* _tmp2_;
	guint8* _tmp3_;
	gint _tmp3__length1;
	g_return_if_fail (self != NULL);
	_tmp0_ = g_byte_array_new ();
	_g_byte_array_free0 (self->priv->_thumbnail);
	self->priv->_thumbnail = _tmp0_;
	_tmp1_ = self->priv->_thumbnail;
	_tmp2_ = value;
	_tmp3_ = _tmp2_->data;
	_tmp3__length1 = (gint) _tmp2_->len;
	g_byte_array_append (_tmp1_, _tmp3_, _tmp3__length1);
	g_object_notify ((GObject *) self, "thumbnail");
}


const gchar* vala_dpap_record_get_comments (ValaDPAPRecord* self) {
	const gchar* result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_comments;
	result = _tmp0_;
	return result;
}


void vala_dpap_record_set_comments (ValaDPAPRecord* self, const gchar* value) {
	const gchar* _tmp0_;
	gchar* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->_comments);
	self->priv->_comments = _tmp1_;
	g_object_notify ((GObject *) self, "comments");
}


gint vala_dpap_record_get_large_filesize (ValaDPAPRecord* self) {
	gint result;
	gint _tmp0_;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = self->priv->_large_filesize;
	result = _tmp0_;
	return result;
}


void vala_dpap_record_set_large_filesize (ValaDPAPRecord* self, gint value) {
	gint _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	self->priv->_large_filesize = _tmp0_;
	g_object_notify ((GObject *) self, "large-filesize");
}


gint vala_dpap_record_get_pixel_height (ValaDPAPRecord* self) {
	gint result;
	gint _tmp0_;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = self->priv->_pixel_height;
	result = _tmp0_;
	return result;
}


void vala_dpap_record_set_pixel_height (ValaDPAPRecord* self, gint value) {
	gint _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	self->priv->_pixel_height = _tmp0_;
	g_object_notify ((GObject *) self, "pixel-height");
}


gint vala_dpap_record_get_pixel_width (ValaDPAPRecord* self) {
	gint result;
	gint _tmp0_;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = self->priv->_pixel_width;
	result = _tmp0_;
	return result;
}


void vala_dpap_record_set_pixel_width (ValaDPAPRecord* self, gint value) {
	gint _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	self->priv->_pixel_width = _tmp0_;
	g_object_notify ((GObject *) self, "pixel-width");
}


gint vala_dpap_record_get_rating (ValaDPAPRecord* self) {
	gint result;
	gint _tmp0_;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = self->priv->_rating;
	result = _tmp0_;
	return result;
}


void vala_dpap_record_set_rating (ValaDPAPRecord* self, gint value) {
	gint _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	self->priv->_rating = _tmp0_;
	g_object_notify ((GObject *) self, "rating");
}


gint vala_dpap_record_get_creation_date (ValaDPAPRecord* self) {
	gint result;
	gint _tmp0_;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = self->priv->_creation_date;
	result = _tmp0_;
	return result;
}


void vala_dpap_record_set_creation_date (ValaDPAPRecord* self, gint value) {
	gint _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	self->priv->_creation_date = _tmp0_;
	g_object_notify ((GObject *) self, "creation-date");
}


static void vala_dpap_record_class_init (ValaDPAPRecordClass * klass) {
	vala_dpap_record_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (ValaDPAPRecordPrivate));
	G_OBJECT_CLASS (klass)->get_property = _vala_vala_dpap_record_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_vala_dpap_record_set_property;
	G_OBJECT_CLASS (klass)->finalize = vala_dpap_record_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALA_DPAP_RECORD_LOCATION, g_param_spec_string ("location", "location", "location", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALA_DPAP_RECORD_FILENAME, g_param_spec_string ("filename", "filename", "filename", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALA_DPAP_RECORD_ASPECT_RATIO, g_param_spec_string ("aspect-ratio", "aspect-ratio", "aspect-ratio", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALA_DPAP_RECORD_FORMAT, g_param_spec_string ("format", "format", "format", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALA_DPAP_RECORD_THUMBNAIL, g_param_spec_pointer ("thumbnail", "thumbnail", "thumbnail", G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALA_DPAP_RECORD_COMMENTS, g_param_spec_string ("comments", "comments", "comments", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALA_DPAP_RECORD_LARGE_FILESIZE, g_param_spec_int ("large-filesize", "large-filesize", "large-filesize", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALA_DPAP_RECORD_PIXEL_HEIGHT, g_param_spec_int ("pixel-height", "pixel-height", "pixel-height", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALA_DPAP_RECORD_PIXEL_WIDTH, g_param_spec_int ("pixel-width", "pixel-width", "pixel-width", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALA_DPAP_RECORD_RATING, g_param_spec_int ("rating", "rating", "rating", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALA_DPAP_RECORD_CREATION_DATE, g_param_spec_int ("creation-date", "creation-date", "creation-date", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
}


static void vala_dpap_record_dmap_record_interface_init (DMAPRecordIface * iface) {
	vala_dpap_record_dmap_record_parent_iface = g_type_interface_peek_parent (iface);
	iface->set_from_blob = (DMAPRecord* (*)(DMAPRecord*, GByteArray*)) vala_dpap_record_real_set_from_blob;
	iface->to_blob = (GByteArray* (*)(DMAPRecord*)) vala_dpap_record_real_to_blob;
}


static void vala_dpap_record_dpap_record_interface_init (DPAPRecordIface * iface) {
	vala_dpap_record_dpap_record_parent_iface = g_type_interface_peek_parent (iface);
	iface->read = (GInputStream* (*)(DPAPRecord*, GError**)) vala_dpap_record_real_read;
}


static void vala_dpap_record_instance_init (ValaDPAPRecord * self) {
	self->priv = VALA_DPAP_RECORD_GET_PRIVATE (self);
}


static void vala_dpap_record_finalize (GObject* obj) {
	ValaDPAPRecord * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_VALA_DPAP_RECORD, ValaDPAPRecord);
	_g_free0 (self->priv->_location);
	_g_free0 (self->priv->_filename);
	_g_free0 (self->priv->_aspect_ratio);
	_g_free0 (self->priv->_format);
	_g_free0 (self->priv->_comments);
	_g_byte_array_free0 (self->priv->_thumbnail);
	G_OBJECT_CLASS (vala_dpap_record_parent_class)->finalize (obj);
}


GType vala_dpap_record_get_type (void) {
	static volatile gsize vala_dpap_record_type_id__volatile = 0;
	if (g_once_init_enter (&vala_dpap_record_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaDPAPRecordClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_dpap_record_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaDPAPRecord), 0, (GInstanceInitFunc) vala_dpap_record_instance_init, NULL };
		static const GInterfaceInfo dmap_record_info = { (GInterfaceInitFunc) vala_dpap_record_dmap_record_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		static const GInterfaceInfo dpap_record_info = { (GInterfaceInitFunc) vala_dpap_record_dpap_record_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType vala_dpap_record_type_id;
		vala_dpap_record_type_id = g_type_register_static (G_TYPE_OBJECT, "ValaDPAPRecord", &g_define_type_info, 0);
		g_type_add_interface_static (vala_dpap_record_type_id, DMAP_TYPE_RECORD, &dmap_record_info);
		g_type_add_interface_static (vala_dpap_record_type_id, DPAP_TYPE_RECORD, &dpap_record_info);
		g_once_init_leave (&vala_dpap_record_type_id__volatile, vala_dpap_record_type_id);
	}
	return vala_dpap_record_type_id__volatile;
}


static void _vala_vala_dpap_record_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	ValaDPAPRecord * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, TYPE_VALA_DPAP_RECORD, ValaDPAPRecord);
	switch (property_id) {
		case VALA_DPAP_RECORD_LOCATION:
		g_value_set_string (value, vala_dpap_record_get_location (self));
		break;
		case VALA_DPAP_RECORD_FILENAME:
		g_value_set_string (value, vala_dpap_record_get_filename (self));
		break;
		case VALA_DPAP_RECORD_ASPECT_RATIO:
		g_value_set_string (value, vala_dpap_record_get_aspect_ratio (self));
		break;
		case VALA_DPAP_RECORD_FORMAT:
		g_value_set_string (value, vala_dpap_record_get_format (self));
		break;
		case VALA_DPAP_RECORD_THUMBNAIL:
		g_value_set_pointer (value, vala_dpap_record_get_thumbnail (self));
		break;
		case VALA_DPAP_RECORD_COMMENTS:
		g_value_set_string (value, vala_dpap_record_get_comments (self));
		break;
		case VALA_DPAP_RECORD_LARGE_FILESIZE:
		g_value_set_int (value, vala_dpap_record_get_large_filesize (self));
		break;
		case VALA_DPAP_RECORD_PIXEL_HEIGHT:
		g_value_set_int (value, vala_dpap_record_get_pixel_height (self));
		break;
		case VALA_DPAP_RECORD_PIXEL_WIDTH:
		g_value_set_int (value, vala_dpap_record_get_pixel_width (self));
		break;
		case VALA_DPAP_RECORD_RATING:
		g_value_set_int (value, vala_dpap_record_get_rating (self));
		break;
		case VALA_DPAP_RECORD_CREATION_DATE:
		g_value_set_int (value, vala_dpap_record_get_creation_date (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_vala_dpap_record_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	ValaDPAPRecord * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, TYPE_VALA_DPAP_RECORD, ValaDPAPRecord);
	switch (property_id) {
		case VALA_DPAP_RECORD_LOCATION:
		vala_dpap_record_set_location (self, g_value_get_string (value));
		break;
		case VALA_DPAP_RECORD_FILENAME:
		vala_dpap_record_set_filename (self, g_value_get_string (value));
		break;
		case VALA_DPAP_RECORD_ASPECT_RATIO:
		vala_dpap_record_set_aspect_ratio (self, g_value_get_string (value));
		break;
		case VALA_DPAP_RECORD_FORMAT:
		vala_dpap_record_set_format (self, g_value_get_string (value));
		break;
		case VALA_DPAP_RECORD_THUMBNAIL:
		vala_dpap_record_set_thumbnail (self, g_value_get_pointer (value));
		break;
		case VALA_DPAP_RECORD_COMMENTS:
		vala_dpap_record_set_comments (self, g_value_get_string (value));
		break;
		case VALA_DPAP_RECORD_LARGE_FILESIZE:
		vala_dpap_record_set_large_filesize (self, g_value_get_int (value));
		break;
		case VALA_DPAP_RECORD_PIXEL_HEIGHT:
		vala_dpap_record_set_pixel_height (self, g_value_get_int (value));
		break;
		case VALA_DPAP_RECORD_PIXEL_WIDTH:
		vala_dpap_record_set_pixel_width (self, g_value_get_int (value));
		break;
		case VALA_DPAP_RECORD_RATING:
		vala_dpap_record_set_rating (self, g_value_get_int (value));
		break;
		case VALA_DPAP_RECORD_CREATION_DATE:
		vala_dpap_record_set_creation_date (self, g_value_get_int (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static DMAPRecord* vala_dpap_record_factory_real_create (DMAPRecordFactory* base, void* user_data) {
	ValaDPAPRecordFactory * self;
	DMAPRecord* result = NULL;
	ValaDPAPRecord* _tmp0_;
	self = (ValaDPAPRecordFactory*) base;
	_tmp0_ = vala_dpap_record_new ();
	result = (DMAPRecord*) _tmp0_;
	return result;
}


ValaDPAPRecordFactory* vala_dpap_record_factory_construct (GType object_type) {
	ValaDPAPRecordFactory * self = NULL;
	self = (ValaDPAPRecordFactory*) g_object_new (object_type, NULL);
	return self;
}


ValaDPAPRecordFactory* vala_dpap_record_factory_new (void) {
	return vala_dpap_record_factory_construct (TYPE_VALA_DPAP_RECORD_FACTORY);
}


static void vala_dpap_record_factory_class_init (ValaDPAPRecordFactoryClass * klass) {
	vala_dpap_record_factory_parent_class = g_type_class_peek_parent (klass);
}


static void vala_dpap_record_factory_dmap_record_factory_interface_init (DMAPRecordFactoryIface * iface) {
	vala_dpap_record_factory_dmap_record_factory_parent_iface = g_type_interface_peek_parent (iface);
	iface->create = (DMAPRecord* (*)(DMAPRecordFactory*, void*)) vala_dpap_record_factory_real_create;
}


static void vala_dpap_record_factory_instance_init (ValaDPAPRecordFactory * self) {
}


GType vala_dpap_record_factory_get_type (void) {
	static volatile gsize vala_dpap_record_factory_type_id__volatile = 0;
	if (g_once_init_enter (&vala_dpap_record_factory_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaDPAPRecordFactoryClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_dpap_record_factory_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaDPAPRecordFactory), 0, (GInstanceInitFunc) vala_dpap_record_factory_instance_init, NULL };
		static const GInterfaceInfo dmap_record_factory_info = { (GInterfaceInitFunc) vala_dpap_record_factory_dmap_record_factory_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType vala_dpap_record_factory_type_id;
		vala_dpap_record_factory_type_id = g_type_register_static (G_TYPE_OBJECT, "ValaDPAPRecordFactory", &g_define_type_info, 0);
		g_type_add_interface_static (vala_dpap_record_factory_type_id, DMAP_TYPE_RECORD_FACTORY, &dmap_record_factory_info);
		g_once_init_leave (&vala_dpap_record_factory_type_id__volatile, vala_dpap_record_factory_type_id);
	}
	return vala_dpap_record_factory_type_id__volatile;
}



