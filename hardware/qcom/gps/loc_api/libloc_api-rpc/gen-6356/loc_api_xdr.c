/*  
Copyright (c) 2009, QUALCOMM USA, INC.

All rights reserved.

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

�         Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer. 

�         Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution. 

�         Neither the name of the QUALCOMM USA, INC.  nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission. 

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

 */

/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "loc_api.h"

bool_t
xdr_rpc_loc_api_api_versions_return_type (XDR *xdrs, rpc_loc_api_api_versions_return_type *objp)
{
	register int32_t *buf;

	 if (!xdr_array (xdrs, (char **)&objp->rpc_loc_api_api_versions_return_type_val, (u_int *) &objp->rpc_loc_api_api_versions_return_type_len, ~0,
		sizeof (rpc_uint32), (xdrproc_t) xdr_rpc_uint32))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_rpc_loc_event_cb_f_type (XDR *xdrs, rpc_loc_event_cb_f_type *objp)
{
	register int32_t *buf;

	 if (!xdr_rpc_uint32 (xdrs, objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_rpc_loc_open_args (XDR *xdrs, rpc_loc_open_args *objp)
{
	register int32_t *buf;

	 if (!xdr_rpc_loc_event_mask_type (xdrs, &objp->event_reg_mask))
		 return FALSE;
	 if (!xdr_rpc_loc_event_cb_f_type (xdrs, &objp->event_callback))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_rpc_loc_close_args (XDR *xdrs, rpc_loc_close_args *objp)
{
	register int32_t *buf;

	 if (!xdr_rpc_loc_client_handle_type (xdrs, &objp->handle))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_rpc_loc_start_fix_args (XDR *xdrs, rpc_loc_start_fix_args *objp)
{
	register int32_t *buf;

	 if (!xdr_rpc_loc_client_handle_type (xdrs, &objp->handle))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_rpc_loc_stop_fix_args (XDR *xdrs, rpc_loc_stop_fix_args *objp)
{
	register int32_t *buf;

	 if (!xdr_rpc_loc_client_handle_type (xdrs, &objp->handle))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_rpc_loc_ioctl_args (XDR *xdrs, rpc_loc_ioctl_args *objp)
{
	register int32_t *buf;

	 if (!xdr_rpc_loc_client_handle_type (xdrs, &objp->handle))
		 return FALSE;
	 if (!xdr_rpc_loc_ioctl_e_type (xdrs, &objp->ioctl_type))
		 return FALSE;
	 if (!xdr_pointer (xdrs, (char **)&objp->ioctl_data, sizeof (rpc_loc_ioctl_data_u_type), (xdrproc_t) xdr_rpc_loc_ioctl_data_u_type))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_rpc_loc_api_api_version_s_args (XDR *xdrs, rpc_loc_api_api_version_s_args *objp)
{
	register int32_t *buf;

	 if (!xdr_rpc_boolean (xdrs, &objp->len_not_null))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_rpc_loc_api_rpc_glue_code_info_remote_rets (XDR *xdrs, rpc_loc_api_rpc_glue_code_info_remote_rets *objp)
{
	register int32_t *buf;

	 if (!xdr_rpc_uint32 (xdrs, &objp->toolvers))
		 return FALSE;
	 if (!xdr_rpc_uint32 (xdrs, &objp->features))
		 return FALSE;
	 if (!xdr_rpc_uint32 (xdrs, &objp->proghash))
		 return FALSE;
	 if (!xdr_rpc_uint32 (xdrs, &objp->cbproghash))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_rpc_loc_open_rets (XDR *xdrs, rpc_loc_open_rets *objp)
{
	register int32_t *buf;

	 if (!xdr_rpc_loc_client_handle_type (xdrs, &objp->loc_open_result))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_rpc_loc_close_rets (XDR *xdrs, rpc_loc_close_rets *objp)
{
	register int32_t *buf;

	 if (!xdr_rpc_int32 (xdrs, &objp->loc_close_result))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_rpc_loc_start_fix_rets (XDR *xdrs, rpc_loc_start_fix_rets *objp)
{
	register int32_t *buf;

	 if (!xdr_rpc_int32 (xdrs, &objp->loc_start_fix_result))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_rpc_loc_stop_fix_rets (XDR *xdrs, rpc_loc_stop_fix_rets *objp)
{
	register int32_t *buf;

	 if (!xdr_rpc_int32 (xdrs, &objp->loc_stop_fix_result))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_rpc_loc_ioctl_rets (XDR *xdrs, rpc_loc_ioctl_rets *objp)
{
	register int32_t *buf;

	 if (!xdr_rpc_int32 (xdrs, &objp->loc_ioctl_result))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_rpc_loc_api_api_versions_rets (XDR *xdrs, rpc_loc_api_api_versions_rets *objp)
{
	register int32_t *buf;

	 if (!xdr_rpc_loc_api_api_versions_return_type (xdrs, &objp->loc_api_api_versions_result))
		 return FALSE;
	 if (!xdr_pointer (xdrs, (char **)&objp->len, sizeof (rpc_uint32), (xdrproc_t) xdr_rpc_uint32))
		 return FALSE;
	return TRUE;
}
