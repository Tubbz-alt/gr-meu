/* -*- c++ -*- */
/* 
 * Copyright 2017 <+YOU OR YOUR COMPANY+>.
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */


#ifndef INCLUDED_MEU_PHASE_FINDER_VCI_H
#define INCLUDED_MEU_PHASE_FINDER_VCI_H

#include <meu/api.h>
#include <gnuradio/block.h>

namespace gr {
  namespace meu {

    /*!
     * \brief <+description of block+>
     * \ingroup meu
     *
     */
    class MEU_API phase_finder_vci : virtual public gr::block
    {
     public:
      typedef boost::shared_ptr<phase_finder_vci> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of meu::phase_finder_vci.
       *
       * To avoid accidental use of raw pointers, meu::phase_finder_vci's
       * constructor is in a private implementation
       * class. meu::phase_finder_vci::make is the public interface for
       * creating new instances.
       */
      static sptr make(int cp_len , int fft_len);
    };

  } // namespace meu
} // namespace gr

#endif /* INCLUDED_MEU_PHASE_FINDER_VCI_H */

