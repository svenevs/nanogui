/*
     NanoGUI was developed by Wenzel Jakob <wenzel.jakob@epfl.ch>.
     The widget drawing code is based on the NanoVG demo application
     by Mikko Mononen.

     All rights reserved. Use of this source code is governed by a
     BSD-style license that can be found in the LICENSE.txt file.
 */
/**
 * \file nanogui/entypo.h
 *
 * \brief This is a list of icon codes for the ``entypo.ttf`` font by Daniel Bruce.
 *
 * \rst
 *
 * This file defines the full listing of `Entypo <http://www.entypo.com/>`_
 * icons available in NanoGUI.  Please note that if viewing the documentation
 * on the web, your browser may display the icons differentaly than what they
 * look like in NanoGUI.
 *
 * .. warning::
 *
 *    Constants you may have used in the past may no longer exist, e.g.
 *    the name may have changed slightly.  For example, ``ENTYPO_ICON_CIRCLED_HELP``
 *    is renamed to ``ENTYPO_ICON_HELP_WITH_CIRCLE``.
 *
 * .. tip::
 *
 *    In C++, ``#include <nanogui/entypo.h>`` to gain access to the ``#define``
 *    shown in these docs.  In Python, ``import nanogui.entypo``.  So in the
 *    below table, when you see ``FLOW_TREE``, you would use it as
 *
 *    .. code-block:: cpp
 *
 *       #include <nanogui/entypo.h>
 *       std::cout << "Prefix with ENTYPO_ICON_: " << ENTYPO_ICON_FLOW_TREE << std::endl;
 *
 *    and in Python:
 *
 *    .. code-block:: py
 *
 *       from nanogui import entypo
 *       print("Prefix with entypo.ICON_: " + entypo.ICON_FLOW_TREE)
 *
 *    .. raw:: html
 *
 *       <p>Giving you access to the <code>FLOW_TREE</code> icon (<span class="entypo-icon-flow-tree"></span>).
 *
 * The following icons are available:
 *
 * .. raw:: html
 *
 *    <center>
 *      <div class="wy-table-responsive">
 *        <table class="docutils" border=1>
 *          <colgroup>
 *            <col width="80%" />
 *            <col width="20%" align="center" />
 *          </colgroup>
 *          <thead valign="bottom">
 *            <tr class="row-odd">
 *              <th class="head">Icon Name</th>
 *              <th class="head">Icon</th>
 *            </tr>
 *          </thead>
 *          <tbody valign="top">
 *            <tr class="row-even">
 *              <td><code>500PX</code></td>
 *              <td><span class="entypo-icon-500px"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>500PX_WITH_CIRCLE</code></td>
 *              <td><span class="entypo-icon-500px-with-circle"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>ADD_TO_LIST</code></td>
 *              <td><span class="entypo-icon-add-to-list"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>ADD_USER</code></td>
 *              <td><span class="entypo-icon-add-user"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>ADDRESS</code></td>
 *              <td><span class="entypo-icon-address"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>ADJUST</code></td>
 *              <td><span class="entypo-icon-adjust"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>AIR</code></td>
 *              <td><span class="entypo-icon-air"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>AIRCRAFT</code></td>
 *              <td><span class="entypo-icon-aircraft"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>AIRCRAFT_LANDING</code></td>
 *              <td><span class="entypo-icon-aircraft-landing"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>AIRCRAFT_TAKE_OFF</code></td>
 *              <td><span class="entypo-icon-aircraft-take-off"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>ALIGN_BOTTOM</code></td>
 *              <td><span class="entypo-icon-align-bottom"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>ALIGN_HORIZONTAL_MIDDLE</code></td>
 *              <td><span class="entypo-icon-align-horizontal-middle"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>ALIGN_LEFT</code></td>
 *              <td><span class="entypo-icon-align-left"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>ALIGN_RIGHT</code></td>
 *              <td><span class="entypo-icon-align-right"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>ALIGN_TOP</code></td>
 *              <td><span class="entypo-icon-align-top"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>ALIGN_VERTICAL_MIDDLE</code></td>
 *              <td><span class="entypo-icon-align-vertical-middle"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>APP_STORE</code></td>
 *              <td><span class="entypo-icon-app-store"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>ARCHIVE</code></td>
 *              <td><span class="entypo-icon-archive"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>AREA_GRAPH</code></td>
 *              <td><span class="entypo-icon-area-graph"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>ARROW_BOLD_DOWN</code></td>
 *              <td><span class="entypo-icon-arrow-bold-down"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>ARROW_BOLD_LEFT</code></td>
 *              <td><span class="entypo-icon-arrow-bold-left"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>ARROW_BOLD_RIGHT</code></td>
 *              <td><span class="entypo-icon-arrow-bold-right"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>ARROW_BOLD_UP</code></td>
 *              <td><span class="entypo-icon-arrow-bold-up"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>ARROW_DOWN</code></td>
 *              <td><span class="entypo-icon-arrow-down"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>ARROW_LEFT</code></td>
 *              <td><span class="entypo-icon-arrow-left"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>ARROW_LONG_DOWN</code></td>
 *              <td><span class="entypo-icon-arrow-long-down"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>ARROW_LONG_LEFT</code></td>
 *              <td><span class="entypo-icon-arrow-long-left"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>ARROW_LONG_RIGHT</code></td>
 *              <td><span class="entypo-icon-arrow-long-right"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>ARROW_LONG_UP</code></td>
 *              <td><span class="entypo-icon-arrow-long-up"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>ARROW_RIGHT</code></td>
 *              <td><span class="entypo-icon-arrow-right"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>ARROW_UP</code></td>
 *              <td><span class="entypo-icon-arrow-up"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>ARROW_WITH_CIRCLE_DOWN</code></td>
 *              <td><span class="entypo-icon-arrow-with-circle-down"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>ARROW_WITH_CIRCLE_LEFT</code></td>
 *              <td><span class="entypo-icon-arrow-with-circle-left"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>ARROW_WITH_CIRCLE_RIGHT</code></td>
 *              <td><span class="entypo-icon-arrow-with-circle-right"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>ARROW_WITH_CIRCLE_UP</code></td>
 *              <td><span class="entypo-icon-arrow-with-circle-up"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>ATTACHMENT</code></td>
 *              <td><span class="entypo-icon-attachment"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>AWARENESS_RIBBON</code></td>
 *              <td><span class="entypo-icon-awareness-ribbon"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>BACK</code></td>
 *              <td><span class="entypo-icon-back"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>BACK_IN_TIME</code></td>
 *              <td><span class="entypo-icon-back-in-time"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>BAIDU</code></td>
 *              <td><span class="entypo-icon-baidu"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>BAR_GRAPH</code></td>
 *              <td><span class="entypo-icon-bar-graph"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>BASECAMP</code></td>
 *              <td><span class="entypo-icon-basecamp"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>BATTERY</code></td>
 *              <td><span class="entypo-icon-battery"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>BEAMED_NOTE</code></td>
 *              <td><span class="entypo-icon-beamed-note"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>BEHANCE</code></td>
 *              <td><span class="entypo-icon-behance"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>BELL</code></td>
 *              <td><span class="entypo-icon-bell"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>BLACKBOARD</code></td>
 *              <td><span class="entypo-icon-blackboard"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>BLOCK</code></td>
 *              <td><span class="entypo-icon-block"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>BOOK</code></td>
 *              <td><span class="entypo-icon-book"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>BOOKMARK</code></td>
 *              <td><span class="entypo-icon-bookmark"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>BOOKMARKS</code></td>
 *              <td><span class="entypo-icon-bookmarks"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>BOWL</code></td>
 *              <td><span class="entypo-icon-bowl"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>BOX</code></td>
 *              <td><span class="entypo-icon-box"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>BRIEFCASE</code></td>
 *              <td><span class="entypo-icon-briefcase"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>BROWSER</code></td>
 *              <td><span class="entypo-icon-browser"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>BRUSH</code></td>
 *              <td><span class="entypo-icon-brush"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>BUCKET</code></td>
 *              <td><span class="entypo-icon-bucket"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>BUG</code></td>
 *              <td><span class="entypo-icon-bug"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>CAKE</code></td>
 *              <td><span class="entypo-icon-cake"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>CALCULATOR</code></td>
 *              <td><span class="entypo-icon-calculator"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>CALENDAR</code></td>
 *              <td><span class="entypo-icon-calendar"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>CAMERA</code></td>
 *              <td><span class="entypo-icon-camera"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>CCW</code></td>
 *              <td><span class="entypo-icon-ccw"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>CHAT</code></td>
 *              <td><span class="entypo-icon-chat"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>CHECK</code></td>
 *              <td><span class="entypo-icon-check"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>CHEVRON_DOWN</code></td>
 *              <td><span class="entypo-icon-chevron-down"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>CHEVRON_LEFT</code></td>
 *              <td><span class="entypo-icon-chevron-left"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>CHEVRON_RIGHT</code></td>
 *              <td><span class="entypo-icon-chevron-right"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>CHEVRON_SMALL_DOWN</code></td>
 *              <td><span class="entypo-icon-chevron-small-down"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>CHEVRON_SMALL_LEFT</code></td>
 *              <td><span class="entypo-icon-chevron-small-left"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>CHEVRON_SMALL_RIGHT</code></td>
 *              <td><span class="entypo-icon-chevron-small-right"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>CHEVRON_SMALL_UP</code></td>
 *              <td><span class="entypo-icon-chevron-small-up"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>CHEVRON_THIN_DOWN</code></td>
 *              <td><span class="entypo-icon-chevron-thin-down"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>CHEVRON_THIN_LEFT</code></td>
 *              <td><span class="entypo-icon-chevron-thin-left"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>CHEVRON_THIN_RIGHT</code></td>
 *              <td><span class="entypo-icon-chevron-thin-right"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>CHEVRON_THIN_UP</code></td>
 *              <td><span class="entypo-icon-chevron-thin-up"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>CHEVRON_UP</code></td>
 *              <td><span class="entypo-icon-chevron-up"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>CHEVRON_WITH_CIRCLE_DOWN</code></td>
 *              <td><span class="entypo-icon-chevron-with-circle-down"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>CHEVRON_WITH_CIRCLE_LEFT</code></td>
 *              <td><span class="entypo-icon-chevron-with-circle-left"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>CHEVRON_WITH_CIRCLE_RIGHT</code></td>
 *              <td><span class="entypo-icon-chevron-with-circle-right"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>CHEVRON_WITH_CIRCLE_UP</code></td>
 *              <td><span class="entypo-icon-chevron-with-circle-up"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>CIRCLE</code></td>
 *              <td><span class="entypo-icon-circle"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>CIRCLE_WITH_CROSS</code></td>
 *              <td><span class="entypo-icon-circle-with-cross"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>CIRCLE_WITH_MINUS</code></td>
 *              <td><span class="entypo-icon-circle-with-minus"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>CIRCLE_WITH_PLUS</code></td>
 *              <td><span class="entypo-icon-circle-with-plus"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>CIRCULAR_GRAPH</code></td>
 *              <td><span class="entypo-icon-circular-graph"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>CLAPPERBOARD</code></td>
 *              <td><span class="entypo-icon-clapperboard"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>CLASSIC_COMPUTER</code></td>
 *              <td><span class="entypo-icon-classic-computer"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>CLIPBOARD</code></td>
 *              <td><span class="entypo-icon-clipboard"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>CLOCK</code></td>
 *              <td><span class="entypo-icon-clock"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>CLOUD</code></td>
 *              <td><span class="entypo-icon-cloud"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>CODE</code></td>
 *              <td><span class="entypo-icon-code"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>COG</code></td>
 *              <td><span class="entypo-icon-cog"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>COLOURS</code></td>
 *              <td><span class="entypo-icon-colours"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>COMPASS</code></td>
 *              <td><span class="entypo-icon-compass"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>CONTROLLER_FAST_BACKWARD</code></td>
 *              <td><span class="entypo-icon-controller-fast-backward"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>CONTROLLER_FAST_FORWARD</code></td>
 *              <td><span class="entypo-icon-controller-fast-forward"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>CONTROLLER_JUMP_TO_START</code></td>
 *              <td><span class="entypo-icon-controller-jump-to-start"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>CONTROLLER_NEXT</code></td>
 *              <td><span class="entypo-icon-controller-next"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>CONTROLLER_PAUS</code></td>
 *              <td><span class="entypo-icon-controller-paus"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>CONTROLLER_PLAY</code></td>
 *              <td><span class="entypo-icon-controller-play"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>CONTROLLER_RECORD</code></td>
 *              <td><span class="entypo-icon-controller-record"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>CONTROLLER_STOP</code></td>
 *              <td><span class="entypo-icon-controller-stop"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>CONTROLLER_VOLUME</code></td>
 *              <td><span class="entypo-icon-controller-volume"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>COPY</code></td>
 *              <td><span class="entypo-icon-copy"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>CREATIVE_CLOUD</code></td>
 *              <td><span class="entypo-icon-creative-cloud"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>CREATIVE_COMMONS</code></td>
 *              <td><span class="entypo-icon-creative-commons"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>CREATIVE_COMMONS_ATTRIBUTION</code></td>
 *              <td><span class="entypo-icon-creative-commons-attribution"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>CREATIVE_COMMONS_NODERIVS</code></td>
 *              <td><span class="entypo-icon-creative-commons-noderivs"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>CREATIVE_COMMONS_NONCOMMERCIAL_EU</code></td>
 *              <td><span class="entypo-icon-creative-commons-noncommercial-eu"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>CREATIVE_COMMONS_NONCOMMERCIAL_US</code></td>
 *              <td><span class="entypo-icon-creative-commons-noncommercial-us"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>CREATIVE_COMMONS_PUBLIC_DOMAIN</code></td>
 *              <td><span class="entypo-icon-creative-commons-public-domain"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>CREATIVE_COMMONS_REMIX</code></td>
 *              <td><span class="entypo-icon-creative-commons-remix"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>CREATIVE_COMMONS_SHARE</code></td>
 *              <td><span class="entypo-icon-creative-commons-share"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>CREATIVE_COMMONS_SHAREALIKE</code></td>
 *              <td><span class="entypo-icon-creative-commons-sharealike"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>CREDIT</code></td>
 *              <td><span class="entypo-icon-credit"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>CREDIT_CARD</code></td>
 *              <td><span class="entypo-icon-credit-card"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>CROP</code></td>
 *              <td><span class="entypo-icon-crop"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>CROSS</code></td>
 *              <td><span class="entypo-icon-cross"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>CUP</code></td>
 *              <td><span class="entypo-icon-cup"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>CW</code></td>
 *              <td><span class="entypo-icon-cw"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>CYCLE</code></td>
 *              <td><span class="entypo-icon-cycle"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>DATABASE</code></td>
 *              <td><span class="entypo-icon-database"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>DIAL_PAD</code></td>
 *              <td><span class="entypo-icon-dial-pad"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>DIRECTION</code></td>
 *              <td><span class="entypo-icon-direction"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>DOCUMENT</code></td>
 *              <td><span class="entypo-icon-document"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>DOCUMENT_LANDSCAPE</code></td>
 *              <td><span class="entypo-icon-document-landscape"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>DOCUMENTS</code></td>
 *              <td><span class="entypo-icon-documents"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>DOT_SINGLE</code></td>
 *              <td><span class="entypo-icon-dot-single"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>DOTS_THREE_HORIZONTAL</code></td>
 *              <td><span class="entypo-icon-dots-three-horizontal"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>DOTS_THREE_VERTICAL</code></td>
 *              <td><span class="entypo-icon-dots-three-vertical"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>DOTS_TWO_HORIZONTAL</code></td>
 *              <td><span class="entypo-icon-dots-two-horizontal"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>DOTS_TWO_VERTICAL</code></td>
 *              <td><span class="entypo-icon-dots-two-vertical"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>DOWNLOAD</code></td>
 *              <td><span class="entypo-icon-download"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>DRIBBBLE</code></td>
 *              <td><span class="entypo-icon-dribbble"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>DRIBBBLE_WITH_CIRCLE</code></td>
 *              <td><span class="entypo-icon-dribbble-with-circle"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>DRINK</code></td>
 *              <td><span class="entypo-icon-drink"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>DRIVE</code></td>
 *              <td><span class="entypo-icon-drive"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>DROP</code></td>
 *              <td><span class="entypo-icon-drop"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>DROPBOX</code></td>
 *              <td><span class="entypo-icon-dropbox"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>EDIT</code></td>
 *              <td><span class="entypo-icon-edit"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>EMAIL</code></td>
 *              <td><span class="entypo-icon-email"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>EMOJI_FLIRT</code></td>
 *              <td><span class="entypo-icon-emoji-flirt"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>EMOJI_HAPPY</code></td>
 *              <td><span class="entypo-icon-emoji-happy"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>EMOJI_NEUTRAL</code></td>
 *              <td><span class="entypo-icon-emoji-neutral"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>EMOJI_SAD</code></td>
 *              <td><span class="entypo-icon-emoji-sad"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>ERASE</code></td>
 *              <td><span class="entypo-icon-erase"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>ERASER</code></td>
 *              <td><span class="entypo-icon-eraser"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>EVERNOTE</code></td>
 *              <td><span class="entypo-icon-evernote"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>EXPORT</code></td>
 *              <td><span class="entypo-icon-export"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>EYE</code></td>
 *              <td><span class="entypo-icon-eye"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>EYE_WITH_LINE</code></td>
 *              <td><span class="entypo-icon-eye-with-line"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>FACEBOOK</code></td>
 *              <td><span class="entypo-icon-facebook"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>FACEBOOK_WITH_CIRCLE</code></td>
 *              <td><span class="entypo-icon-facebook-with-circle"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>FEATHER</code></td>
 *              <td><span class="entypo-icon-feather"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>FINGERPRINT</code></td>
 *              <td><span class="entypo-icon-fingerprint"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>FLAG</code></td>
 *              <td><span class="entypo-icon-flag"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>FLASH</code></td>
 *              <td><span class="entypo-icon-flash"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>FLASHLIGHT</code></td>
 *              <td><span class="entypo-icon-flashlight"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>FLAT_BRUSH</code></td>
 *              <td><span class="entypo-icon-flat-brush"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>FLATTR</code></td>
 *              <td><span class="entypo-icon-flattr"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>FLICKR</code></td>
 *              <td><span class="entypo-icon-flickr"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>FLICKR_WITH_CIRCLE</code></td>
 *              <td><span class="entypo-icon-flickr-with-circle"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>FLOW_BRANCH</code></td>
 *              <td><span class="entypo-icon-flow-branch"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>FLOW_CASCADE</code></td>
 *              <td><span class="entypo-icon-flow-cascade"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>FLOW_LINE</code></td>
 *              <td><span class="entypo-icon-flow-line"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>FLOW_PARALLEL</code></td>
 *              <td><span class="entypo-icon-flow-parallel"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>FLOW_TREE</code></td>
 *              <td><span class="entypo-icon-flow-tree"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>FLOWER</code></td>
 *              <td><span class="entypo-icon-flower"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>FOLDER</code></td>
 *              <td><span class="entypo-icon-folder"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>FOLDER_IMAGES</code></td>
 *              <td><span class="entypo-icon-folder-images"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>FOLDER_MUSIC</code></td>
 *              <td><span class="entypo-icon-folder-music"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>FOLDER_VIDEO</code></td>
 *              <td><span class="entypo-icon-folder-video"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>FORWARD</code></td>
 *              <td><span class="entypo-icon-forward"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>FOURSQUARE</code></td>
 *              <td><span class="entypo-icon-foursquare"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>FUNNEL</code></td>
 *              <td><span class="entypo-icon-funnel"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>GAME_CONTROLLER</code></td>
 *              <td><span class="entypo-icon-game-controller"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>GAUGE</code></td>
 *              <td><span class="entypo-icon-gauge"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>GITHUB</code></td>
 *              <td><span class="entypo-icon-github"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>GITHUB_WITH_CIRCLE</code></td>
 *              <td><span class="entypo-icon-github-with-circle"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>GLOBE</code></td>
 *              <td><span class="entypo-icon-globe"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>GOOGLE_</code></td>
 *              <td><span class="entypo-icon-google-"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>GOOGLE__WITH_CIRCLE</code></td>
 *              <td><span class="entypo-icon-google--with-circle"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>GOOGLE_DRIVE</code></td>
 *              <td><span class="entypo-icon-google-drive"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>GOOGLE_HANGOUTS</code></td>
 *              <td><span class="entypo-icon-google-hangouts"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>GOOGLE_PLAY</code></td>
 *              <td><span class="entypo-icon-google-play"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>GRADUATION_CAP</code></td>
 *              <td><span class="entypo-icon-graduation-cap"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>GRID</code></td>
 *              <td><span class="entypo-icon-grid"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>GROOVESHARK</code></td>
 *              <td><span class="entypo-icon-grooveshark"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>HAIR_CROSS</code></td>
 *              <td><span class="entypo-icon-hair-cross"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>HAND</code></td>
 *              <td><span class="entypo-icon-hand"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>HEART</code></td>
 *              <td><span class="entypo-icon-heart"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>HEART_OUTLINED</code></td>
 *              <td><span class="entypo-icon-heart-outlined"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>HELP</code></td>
 *              <td><span class="entypo-icon-help"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>HELP_WITH_CIRCLE</code></td>
 *              <td><span class="entypo-icon-help-with-circle"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>HOME</code></td>
 *              <td><span class="entypo-icon-home"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>HOUR_GLASS</code></td>
 *              <td><span class="entypo-icon-hour-glass"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>HOUZZ</code></td>
 *              <td><span class="entypo-icon-houzz"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>ICLOUD</code></td>
 *              <td><span class="entypo-icon-icloud"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>IMAGE</code></td>
 *              <td><span class="entypo-icon-image"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>IMAGE_INVERTED</code></td>
 *              <td><span class="entypo-icon-image-inverted"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>IMAGES</code></td>
 *              <td><span class="entypo-icon-images"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>INBOX</code></td>
 *              <td><span class="entypo-icon-inbox"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>INFINITY</code></td>
 *              <td><span class="entypo-icon-infinity"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>INFO</code></td>
 *              <td><span class="entypo-icon-info"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>INFO_WITH_CIRCLE</code></td>
 *              <td><span class="entypo-icon-info-with-circle"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>INSTAGRAM</code></td>
 *              <td><span class="entypo-icon-instagram"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>INSTAGRAM_WITH_CIRCLE</code></td>
 *              <td><span class="entypo-icon-instagram-with-circle"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>INSTALL</code></td>
 *              <td><span class="entypo-icon-install"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>KEY</code></td>
 *              <td><span class="entypo-icon-key"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>KEYBOARD</code></td>
 *              <td><span class="entypo-icon-keyboard"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>LAB_FLASK</code></td>
 *              <td><span class="entypo-icon-lab-flask"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>LANDLINE</code></td>
 *              <td><span class="entypo-icon-landline"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>LANGUAGE</code></td>
 *              <td><span class="entypo-icon-language"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>LAPTOP</code></td>
 *              <td><span class="entypo-icon-laptop"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>LASTFM</code></td>
 *              <td><span class="entypo-icon-lastfm"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>LASTFM_WITH_CIRCLE</code></td>
 *              <td><span class="entypo-icon-lastfm-with-circle"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>LAYERS</code></td>
 *              <td><span class="entypo-icon-layers"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>LEAF</code></td>
 *              <td><span class="entypo-icon-leaf"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>LEVEL_DOWN</code></td>
 *              <td><span class="entypo-icon-level-down"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>LEVEL_UP</code></td>
 *              <td><span class="entypo-icon-level-up"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>LIFEBUOY</code></td>
 *              <td><span class="entypo-icon-lifebuoy"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>LIGHT_BULB</code></td>
 *              <td><span class="entypo-icon-light-bulb"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>LIGHT_DOWN</code></td>
 *              <td><span class="entypo-icon-light-down"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>LIGHT_UP</code></td>
 *              <td><span class="entypo-icon-light-up"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>LINE_GRAPH</code></td>
 *              <td><span class="entypo-icon-line-graph"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>LINK</code></td>
 *              <td><span class="entypo-icon-link"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>LINKEDIN</code></td>
 *              <td><span class="entypo-icon-linkedin"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>LINKEDIN_WITH_CIRCLE</code></td>
 *              <td><span class="entypo-icon-linkedin-with-circle"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>LIST</code></td>
 *              <td><span class="entypo-icon-list"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>LOCATION</code></td>
 *              <td><span class="entypo-icon-location"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>LOCATION_PIN</code></td>
 *              <td><span class="entypo-icon-location-pin"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>LOCK</code></td>
 *              <td><span class="entypo-icon-lock"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>LOCK_OPEN</code></td>
 *              <td><span class="entypo-icon-lock-open"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>LOG_OUT</code></td>
 *              <td><span class="entypo-icon-log-out"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>LOGIN</code></td>
 *              <td><span class="entypo-icon-login"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>LOOP</code></td>
 *              <td><span class="entypo-icon-loop"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>MAGNET</code></td>
 *              <td><span class="entypo-icon-magnet"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>MAGNIFYING_GLASS</code></td>
 *              <td><span class="entypo-icon-magnifying-glass"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>MAIL</code></td>
 *              <td><span class="entypo-icon-mail"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>MAIL_WITH_CIRCLE</code></td>
 *              <td><span class="entypo-icon-mail-with-circle"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>MAN</code></td>
 *              <td><span class="entypo-icon-man"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>MAP</code></td>
 *              <td><span class="entypo-icon-map"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>MASK</code></td>
 *              <td><span class="entypo-icon-mask"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>MEDAL</code></td>
 *              <td><span class="entypo-icon-medal"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>MEDIUM</code></td>
 *              <td><span class="entypo-icon-medium"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>MEDIUM_WITH_CIRCLE</code></td>
 *              <td><span class="entypo-icon-medium-with-circle"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>MEGAPHONE</code></td>
 *              <td><span class="entypo-icon-megaphone"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>MENU</code></td>
 *              <td><span class="entypo-icon-menu"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>MERGE</code></td>
 *              <td><span class="entypo-icon-merge"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>MESSAGE</code></td>
 *              <td><span class="entypo-icon-message"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>MIC</code></td>
 *              <td><span class="entypo-icon-mic"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>MINUS</code></td>
 *              <td><span class="entypo-icon-minus"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>MIXI</code></td>
 *              <td><span class="entypo-icon-mixi"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>MOBILE</code></td>
 *              <td><span class="entypo-icon-mobile"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>MODERN_MIC</code></td>
 *              <td><span class="entypo-icon-modern-mic"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>MOON</code></td>
 *              <td><span class="entypo-icon-moon"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>MOUSE</code></td>
 *              <td><span class="entypo-icon-mouse"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>MOUSE_POINTER</code></td>
 *              <td><span class="entypo-icon-mouse-pointer"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>MUSIC</code></td>
 *              <td><span class="entypo-icon-music"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>NETWORK</code></td>
 *              <td><span class="entypo-icon-network"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>NEW</code></td>
 *              <td><span class="entypo-icon-new"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>NEW_MESSAGE</code></td>
 *              <td><span class="entypo-icon-new-message"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>NEWS</code></td>
 *              <td><span class="entypo-icon-news"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>NEWSLETTER</code></td>
 *              <td><span class="entypo-icon-newsletter"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>NOTE</code></td>
 *              <td><span class="entypo-icon-note"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>NOTIFICATION</code></td>
 *              <td><span class="entypo-icon-notification"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>NOTIFICATIONS_OFF</code></td>
 *              <td><span class="entypo-icon-notifications-off"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>OLD_MOBILE</code></td>
 *              <td><span class="entypo-icon-old-mobile"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>OLD_PHONE</code></td>
 *              <td><span class="entypo-icon-old-phone"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>ONEDRIVE</code></td>
 *              <td><span class="entypo-icon-onedrive"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>OPEN_BOOK</code></td>
 *              <td><span class="entypo-icon-open-book"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>PALETTE</code></td>
 *              <td><span class="entypo-icon-palette"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>PAPER_PLANE</code></td>
 *              <td><span class="entypo-icon-paper-plane"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>PAYPAL</code></td>
 *              <td><span class="entypo-icon-paypal"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>PENCIL</code></td>
 *              <td><span class="entypo-icon-pencil"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>PHONE</code></td>
 *              <td><span class="entypo-icon-phone"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>PICASA</code></td>
 *              <td><span class="entypo-icon-picasa"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>PIE_CHART</code></td>
 *              <td><span class="entypo-icon-pie-chart"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>PIN</code></td>
 *              <td><span class="entypo-icon-pin"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>PINTEREST</code></td>
 *              <td><span class="entypo-icon-pinterest"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>PINTEREST_WITH_CIRCLE</code></td>
 *              <td><span class="entypo-icon-pinterest-with-circle"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>PLUS</code></td>
 *              <td><span class="entypo-icon-plus"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>POPUP</code></td>
 *              <td><span class="entypo-icon-popup"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>POWER_PLUG</code></td>
 *              <td><span class="entypo-icon-power-plug"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>PRICE_RIBBON</code></td>
 *              <td><span class="entypo-icon-price-ribbon"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>PRICE_TAG</code></td>
 *              <td><span class="entypo-icon-price-tag"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>PRINT</code></td>
 *              <td><span class="entypo-icon-print"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>PROGRESS_EMPTY</code></td>
 *              <td><span class="entypo-icon-progress-empty"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>PROGRESS_FULL</code></td>
 *              <td><span class="entypo-icon-progress-full"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>PROGRESS_ONE</code></td>
 *              <td><span class="entypo-icon-progress-one"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>PROGRESS_TWO</code></td>
 *              <td><span class="entypo-icon-progress-two"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>PUBLISH</code></td>
 *              <td><span class="entypo-icon-publish"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>QQ</code></td>
 *              <td><span class="entypo-icon-qq"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>QQ_WITH_CIRCLE</code></td>
 *              <td><span class="entypo-icon-qq-with-circle"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>QUOTE</code></td>
 *              <td><span class="entypo-icon-quote"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>RADIO</code></td>
 *              <td><span class="entypo-icon-radio"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>RAFT</code></td>
 *              <td><span class="entypo-icon-raft"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>RAFT_WITH_CIRCLE</code></td>
 *              <td><span class="entypo-icon-raft-with-circle"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>RAINBOW</code></td>
 *              <td><span class="entypo-icon-rainbow"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>RDIO</code></td>
 *              <td><span class="entypo-icon-rdio"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>RDIO_WITH_CIRCLE</code></td>
 *              <td><span class="entypo-icon-rdio-with-circle"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>REMOVE_USER</code></td>
 *              <td><span class="entypo-icon-remove-user"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>RENREN</code></td>
 *              <td><span class="entypo-icon-renren"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>REPLY</code></td>
 *              <td><span class="entypo-icon-reply"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>REPLY_ALL</code></td>
 *              <td><span class="entypo-icon-reply-all"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>RESIZE_100_</code></td>
 *              <td><span class="entypo-icon-resize-100-"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>RESIZE_FULL_SCREEN</code></td>
 *              <td><span class="entypo-icon-resize-full-screen"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>RETWEET</code></td>
 *              <td><span class="entypo-icon-retweet"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>ROCKET</code></td>
 *              <td><span class="entypo-icon-rocket"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>ROUND_BRUSH</code></td>
 *              <td><span class="entypo-icon-round-brush"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>RSS</code></td>
 *              <td><span class="entypo-icon-rss"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>RULER</code></td>
 *              <td><span class="entypo-icon-ruler"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>SAVE</code></td>
 *              <td><span class="entypo-icon-save"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>SCISSORS</code></td>
 *              <td><span class="entypo-icon-scissors"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>SCRIBD</code></td>
 *              <td><span class="entypo-icon-scribd"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>SELECT_ARROWS</code></td>
 *              <td><span class="entypo-icon-select-arrows"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>SHARE</code></td>
 *              <td><span class="entypo-icon-share"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>SHARE_ALTERNATIVE</code></td>
 *              <td><span class="entypo-icon-share-alternative"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>SHAREABLE</code></td>
 *              <td><span class="entypo-icon-shareable"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>SHIELD</code></td>
 *              <td><span class="entypo-icon-shield"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>SHOP</code></td>
 *              <td><span class="entypo-icon-shop"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>SHOPPING_BAG</code></td>
 *              <td><span class="entypo-icon-shopping-bag"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>SHOPPING_BASKET</code></td>
 *              <td><span class="entypo-icon-shopping-basket"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>SHOPPING_CART</code></td>
 *              <td><span class="entypo-icon-shopping-cart"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>SHUFFLE</code></td>
 *              <td><span class="entypo-icon-shuffle"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>SIGNAL</code></td>
 *              <td><span class="entypo-icon-signal"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>SINA_WEIBO</code></td>
 *              <td><span class="entypo-icon-sina-weibo"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>SKYPE</code></td>
 *              <td><span class="entypo-icon-skype"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>SKYPE_WITH_CIRCLE</code></td>
 *              <td><span class="entypo-icon-skype-with-circle"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>SLIDESHARE</code></td>
 *              <td><span class="entypo-icon-slideshare"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>SMASHING</code></td>
 *              <td><span class="entypo-icon-smashing"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>SOUND</code></td>
 *              <td><span class="entypo-icon-sound"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>SOUND_MIX</code></td>
 *              <td><span class="entypo-icon-sound-mix"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>SOUND_MUTE</code></td>
 *              <td><span class="entypo-icon-sound-mute"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>SOUNDCLOUD</code></td>
 *              <td><span class="entypo-icon-soundcloud"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>SPORTS_CLUB</code></td>
 *              <td><span class="entypo-icon-sports-club"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>SPOTIFY</code></td>
 *              <td><span class="entypo-icon-spotify"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>SPOTIFY_WITH_CIRCLE</code></td>
 *              <td><span class="entypo-icon-spotify-with-circle"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>SPREADSHEET</code></td>
 *              <td><span class="entypo-icon-spreadsheet"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>SQUARED_CROSS</code></td>
 *              <td><span class="entypo-icon-squared-cross"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>SQUARED_MINUS</code></td>
 *              <td><span class="entypo-icon-squared-minus"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>SQUARED_PLUS</code></td>
 *              <td><span class="entypo-icon-squared-plus"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>STAR</code></td>
 *              <td><span class="entypo-icon-star"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>STAR_OUTLINED</code></td>
 *              <td><span class="entypo-icon-star-outlined"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>STOPWATCH</code></td>
 *              <td><span class="entypo-icon-stopwatch"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>STUMBLEUPON</code></td>
 *              <td><span class="entypo-icon-stumbleupon"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>STUMBLEUPON_WITH_CIRCLE</code></td>
 *              <td><span class="entypo-icon-stumbleupon-with-circle"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>SUITCASE</code></td>
 *              <td><span class="entypo-icon-suitcase"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>SWAP</code></td>
 *              <td><span class="entypo-icon-swap"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>SWARM</code></td>
 *              <td><span class="entypo-icon-swarm"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>SWEDEN</code></td>
 *              <td><span class="entypo-icon-sweden"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>SWITCH</code></td>
 *              <td><span class="entypo-icon-switch"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>TABLET</code></td>
 *              <td><span class="entypo-icon-tablet"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>TABLET_MOBILE_COMBO</code></td>
 *              <td><span class="entypo-icon-tablet-mobile-combo"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>TAG</code></td>
 *              <td><span class="entypo-icon-tag"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>TEXT</code></td>
 *              <td><span class="entypo-icon-text"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>TEXT_DOCUMENT</code></td>
 *              <td><span class="entypo-icon-text-document"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>TEXT_DOCUMENT_INVERTED</code></td>
 *              <td><span class="entypo-icon-text-document-inverted"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>THERMOMETER</code></td>
 *              <td><span class="entypo-icon-thermometer"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>THUMBS_DOWN</code></td>
 *              <td><span class="entypo-icon-thumbs-down"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>THUMBS_UP</code></td>
 *              <td><span class="entypo-icon-thumbs-up"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>THUNDER_CLOUD</code></td>
 *              <td><span class="entypo-icon-thunder-cloud"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>TICKET</code></td>
 *              <td><span class="entypo-icon-ticket"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>TIME_SLOT</code></td>
 *              <td><span class="entypo-icon-time-slot"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>TOOLS</code></td>
 *              <td><span class="entypo-icon-tools"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>TRAFFIC_CONE</code></td>
 *              <td><span class="entypo-icon-traffic-cone"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>TRASH</code></td>
 *              <td><span class="entypo-icon-trash"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>TREE</code></td>
 *              <td><span class="entypo-icon-tree"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>TRIANGLE_DOWN</code></td>
 *              <td><span class="entypo-icon-triangle-down"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>TRIANGLE_LEFT</code></td>
 *              <td><span class="entypo-icon-triangle-left"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>TRIANGLE_RIGHT</code></td>
 *              <td><span class="entypo-icon-triangle-right"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>TRIANGLE_UP</code></td>
 *              <td><span class="entypo-icon-triangle-up"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>TRIPADVISOR</code></td>
 *              <td><span class="entypo-icon-tripadvisor"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>TROPHY</code></td>
 *              <td><span class="entypo-icon-trophy"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>TUMBLR</code></td>
 *              <td><span class="entypo-icon-tumblr"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>TUMBLR_WITH_CIRCLE</code></td>
 *              <td><span class="entypo-icon-tumblr-with-circle"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>TV</code></td>
 *              <td><span class="entypo-icon-tv"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>TWITTER</code></td>
 *              <td><span class="entypo-icon-twitter"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>TWITTER_WITH_CIRCLE</code></td>
 *              <td><span class="entypo-icon-twitter-with-circle"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>TYPING</code></td>
 *              <td><span class="entypo-icon-typing"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>UNINSTALL</code></td>
 *              <td><span class="entypo-icon-uninstall"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>UNREAD</code></td>
 *              <td><span class="entypo-icon-unread"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>UNTAG</code></td>
 *              <td><span class="entypo-icon-untag"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>UPLOAD</code></td>
 *              <td><span class="entypo-icon-upload"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>UPLOAD_TO_CLOUD</code></td>
 *              <td><span class="entypo-icon-upload-to-cloud"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>USER</code></td>
 *              <td><span class="entypo-icon-user"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>USERS</code></td>
 *              <td><span class="entypo-icon-users"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>V_CARD</code></td>
 *              <td><span class="entypo-icon-v-card"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>VIDEO</code></td>
 *              <td><span class="entypo-icon-video"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>VIDEO_CAMERA</code></td>
 *              <td><span class="entypo-icon-video-camera"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>VIMEO</code></td>
 *              <td><span class="entypo-icon-vimeo"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>VIMEO_WITH_CIRCLE</code></td>
 *              <td><span class="entypo-icon-vimeo-with-circle"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>VINE</code></td>
 *              <td><span class="entypo-icon-vine"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>VINE_WITH_CIRCLE</code></td>
 *              <td><span class="entypo-icon-vine-with-circle"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>VINYL</code></td>
 *              <td><span class="entypo-icon-vinyl"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>VK</code></td>
 *              <td><span class="entypo-icon-vk"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>VK_ALTERNITIVE</code></td>
 *              <td><span class="entypo-icon-vk-alternitive"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>VK_WITH_CIRCLE</code></td>
 *              <td><span class="entypo-icon-vk-with-circle"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>VOICEMAIL</code></td>
 *              <td><span class="entypo-icon-voicemail"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>WALLET</code></td>
 *              <td><span class="entypo-icon-wallet"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>WARNING</code></td>
 *              <td><span class="entypo-icon-warning"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>WATER</code></td>
 *              <td><span class="entypo-icon-water"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>WINDOWS_STORE</code></td>
 *              <td><span class="entypo-icon-windows-store"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>XING</code></td>
 *              <td><span class="entypo-icon-xing"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>XING_WITH_CIRCLE</code></td>
 *              <td><span class="entypo-icon-xing-with-circle"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>YELP</code></td>
 *              <td><span class="entypo-icon-yelp"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>YOUKO</code></td>
 *              <td><span class="entypo-icon-youko"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>YOUKO_WITH_CIRCLE</code></td>
 *              <td><span class="entypo-icon-youko-with-circle"></span></td>
 *            </tr>
 *            <tr class="row-odd">
 *              <td><code>YOUTUBE</code></td>
 *              <td><span class="entypo-icon-youtube"></span></td>
 *            </tr>
 *            <tr class="row-even">
 *              <td><code>YOUTUBE_WITH_CIRCLE</code></td>
 *              <td><span class="entypo-icon-youtube-with-circle"></span></td>
 *            </tr>
 *          </tbody>
 *        </table>
 *      </div><!-- wy-table-responsive -->
 *    </center>
 *
 * \endrst
 */

#pragma once

// prevent individal pages from being generated for all of these
#if !defined(DOXYGEN_SHOULD_SKIP_THIS)

#define ENTYPO_ICON_500PX                             0x0000F249
#define ENTYPO_ICON_500PX_WITH_CIRCLE                 0x0000F24A
#define ENTYPO_ICON_ADD_TO_LIST                       0x0000F100
#define ENTYPO_ICON_ADD_USER                          0x0000F101
#define ENTYPO_ICON_ADDRESS                           0x0000F102
#define ENTYPO_ICON_ADJUST                            0x0000F103
#define ENTYPO_ICON_AIR                               0x0000F104
#define ENTYPO_ICON_AIRCRAFT                          0x0000F105
#define ENTYPO_ICON_AIRCRAFT_LANDING                  0x0000F106
#define ENTYPO_ICON_AIRCRAFT_TAKE_OFF                 0x0000F107
#define ENTYPO_ICON_ALIGN_BOTTOM                      0x0000F108
#define ENTYPO_ICON_ALIGN_HORIZONTAL_MIDDLE           0x0000F109
#define ENTYPO_ICON_ALIGN_LEFT                        0x0000F10A
#define ENTYPO_ICON_ALIGN_RIGHT                       0x0000F10B
#define ENTYPO_ICON_ALIGN_TOP                         0x0000F10C
#define ENTYPO_ICON_ALIGN_VERTICAL_MIDDLE             0x0000F10D
#define ENTYPO_ICON_APP_STORE                         0x0000F24B
#define ENTYPO_ICON_ARCHIVE                           0x0000F10E
#define ENTYPO_ICON_AREA_GRAPH                        0x0000F10F
#define ENTYPO_ICON_ARROW_BOLD_DOWN                   0x0000F110
#define ENTYPO_ICON_ARROW_BOLD_LEFT                   0x0000F111
#define ENTYPO_ICON_ARROW_BOLD_RIGHT                  0x0000F112
#define ENTYPO_ICON_ARROW_BOLD_UP                     0x0000F113
#define ENTYPO_ICON_ARROW_DOWN                        0x0000F114
#define ENTYPO_ICON_ARROW_LEFT                        0x0000F115
#define ENTYPO_ICON_ARROW_LONG_DOWN                   0x0000F116
#define ENTYPO_ICON_ARROW_LONG_LEFT                   0x0000F117
#define ENTYPO_ICON_ARROW_LONG_RIGHT                  0x0000F118
#define ENTYPO_ICON_ARROW_LONG_UP                     0x0000F119
#define ENTYPO_ICON_ARROW_RIGHT                       0x0000F11A
#define ENTYPO_ICON_ARROW_UP                          0x0000F11B
#define ENTYPO_ICON_ARROW_WITH_CIRCLE_DOWN            0x0000F11C
#define ENTYPO_ICON_ARROW_WITH_CIRCLE_LEFT            0x0000F11D
#define ENTYPO_ICON_ARROW_WITH_CIRCLE_RIGHT           0x0000F11E
#define ENTYPO_ICON_ARROW_WITH_CIRCLE_UP              0x0000F11F
#define ENTYPO_ICON_ATTACHMENT                        0x0000F120
#define ENTYPO_ICON_AWARENESS_RIBBON                  0x0000F121
#define ENTYPO_ICON_BACK                              0x0000F122
#define ENTYPO_ICON_BACK_IN_TIME                      0x0000F123
#define ENTYPO_ICON_BAIDU                             0x0000F24C
#define ENTYPO_ICON_BAR_GRAPH                         0x0000F124
#define ENTYPO_ICON_BASECAMP                          0x0000F24D
#define ENTYPO_ICON_BATTERY                           0x0000F125
#define ENTYPO_ICON_BEAMED_NOTE                       0x0000F126
#define ENTYPO_ICON_BEHANCE                           0x0000F24E
#define ENTYPO_ICON_BELL                              0x0000F127
#define ENTYPO_ICON_BLACKBOARD                        0x0000F128
#define ENTYPO_ICON_BLOCK                             0x0000F129
#define ENTYPO_ICON_BOOK                              0x0000F12A
#define ENTYPO_ICON_BOOKMARK                          0x0000F12B
#define ENTYPO_ICON_BOOKMARKS                         0x0000F12C
#define ENTYPO_ICON_BOWL                              0x0000F12D
#define ENTYPO_ICON_BOX                               0x0000F12E
#define ENTYPO_ICON_BRIEFCASE                         0x0000F12F
#define ENTYPO_ICON_BROWSER                           0x0000F130
#define ENTYPO_ICON_BRUSH                             0x0000F131
#define ENTYPO_ICON_BUCKET                            0x0000F132
#define ENTYPO_ICON_BUG                               0x0000F133
#define ENTYPO_ICON_CAKE                              0x0000F134
#define ENTYPO_ICON_CALCULATOR                        0x0000F135
#define ENTYPO_ICON_CALENDAR                          0x0000F136
#define ENTYPO_ICON_CAMERA                            0x0000F137
#define ENTYPO_ICON_CCW                               0x0000F138
#define ENTYPO_ICON_CHAT                              0x0000F139
#define ENTYPO_ICON_CHECK                             0x0000F13A
#define ENTYPO_ICON_CHEVRON_DOWN                      0x0000F13B
#define ENTYPO_ICON_CHEVRON_LEFT                      0x0000F13C
#define ENTYPO_ICON_CHEVRON_RIGHT                     0x0000F13D
#define ENTYPO_ICON_CHEVRON_SMALL_DOWN                0x0000F13E
#define ENTYPO_ICON_CHEVRON_SMALL_LEFT                0x0000F13F
#define ENTYPO_ICON_CHEVRON_SMALL_RIGHT               0x0000F140
#define ENTYPO_ICON_CHEVRON_SMALL_UP                  0x0000F141
#define ENTYPO_ICON_CHEVRON_THIN_DOWN                 0x0000F142
#define ENTYPO_ICON_CHEVRON_THIN_LEFT                 0x0000F143
#define ENTYPO_ICON_CHEVRON_THIN_RIGHT                0x0000F144
#define ENTYPO_ICON_CHEVRON_THIN_UP                   0x0000F145
#define ENTYPO_ICON_CHEVRON_UP                        0x0000F146
#define ENTYPO_ICON_CHEVRON_WITH_CIRCLE_DOWN          0x0000F147
#define ENTYPO_ICON_CHEVRON_WITH_CIRCLE_LEFT          0x0000F148
#define ENTYPO_ICON_CHEVRON_WITH_CIRCLE_RIGHT         0x0000F149
#define ENTYPO_ICON_CHEVRON_WITH_CIRCLE_UP            0x0000F14A
#define ENTYPO_ICON_CIRCLE                            0x0000F14B
#define ENTYPO_ICON_CIRCLE_WITH_CROSS                 0x0000F14C
#define ENTYPO_ICON_CIRCLE_WITH_MINUS                 0x0000F14D
#define ENTYPO_ICON_CIRCLE_WITH_PLUS                  0x0000F14E
#define ENTYPO_ICON_CIRCULAR_GRAPH                    0x0000F14F
#define ENTYPO_ICON_CLAPPERBOARD                      0x0000F150
#define ENTYPO_ICON_CLASSIC_COMPUTER                  0x0000F151
#define ENTYPO_ICON_CLIPBOARD                         0x0000F152
#define ENTYPO_ICON_CLOCK                             0x0000F153
#define ENTYPO_ICON_CLOUD                             0x0000F154
#define ENTYPO_ICON_CODE                              0x0000F155
#define ENTYPO_ICON_COG                               0x0000F156
#define ENTYPO_ICON_COLOURS                           0x0000F157
#define ENTYPO_ICON_COMPASS                           0x0000F158
#define ENTYPO_ICON_CONTROLLER_FAST_BACKWARD          0x0000F159
#define ENTYPO_ICON_CONTROLLER_FAST_FORWARD           0x0000F15A
#define ENTYPO_ICON_CONTROLLER_JUMP_TO_START          0x0000F15B
#define ENTYPO_ICON_CONTROLLER_NEXT                   0x0000F15C
#define ENTYPO_ICON_CONTROLLER_PAUS                   0x0000F15D
#define ENTYPO_ICON_CONTROLLER_PLAY                   0x0000F15E
#define ENTYPO_ICON_CONTROLLER_RECORD                 0x0000F15F
#define ENTYPO_ICON_CONTROLLER_STOP                   0x0000F160
#define ENTYPO_ICON_CONTROLLER_VOLUME                 0x0000F161
#define ENTYPO_ICON_COPY                              0x0000F162
#define ENTYPO_ICON_CREATIVE_CLOUD                    0x0000F24F
#define ENTYPO_ICON_CREATIVE_COMMONS                  0x0000F163
#define ENTYPO_ICON_CREATIVE_COMMONS_ATTRIBUTION      0x0000F164
#define ENTYPO_ICON_CREATIVE_COMMONS_NODERIVS         0x0000F165
#define ENTYPO_ICON_CREATIVE_COMMONS_NONCOMMERCIAL_EU 0x0000F166
#define ENTYPO_ICON_CREATIVE_COMMONS_NONCOMMERCIAL_US 0x0000F167
#define ENTYPO_ICON_CREATIVE_COMMONS_PUBLIC_DOMAIN    0x0000F168
#define ENTYPO_ICON_CREATIVE_COMMONS_REMIX            0x0000F169
#define ENTYPO_ICON_CREATIVE_COMMONS_SHARE            0x0000F16A
#define ENTYPO_ICON_CREATIVE_COMMONS_SHAREALIKE       0x0000F16B
#define ENTYPO_ICON_CREDIT                            0x0000F16C
#define ENTYPO_ICON_CREDIT_CARD                       0x0000F16D
#define ENTYPO_ICON_CROP                              0x0000F16E
#define ENTYPO_ICON_CROSS                             0x0000F16F
#define ENTYPO_ICON_CUP                               0x0000F170
#define ENTYPO_ICON_CW                                0x0000F171
#define ENTYPO_ICON_CYCLE                             0x0000F172
#define ENTYPO_ICON_DATABASE                          0x0000F173
#define ENTYPO_ICON_DIAL_PAD                          0x0000F174
#define ENTYPO_ICON_DIRECTION                         0x0000F175
#define ENTYPO_ICON_DOCUMENT                          0x0000F176
#define ENTYPO_ICON_DOCUMENT_LANDSCAPE                0x0000F177
#define ENTYPO_ICON_DOCUMENTS                         0x0000F178
#define ENTYPO_ICON_DOT_SINGLE                        0x0000F179
#define ENTYPO_ICON_DOTS_THREE_HORIZONTAL             0x0000F17A
#define ENTYPO_ICON_DOTS_THREE_VERTICAL               0x0000F17B
#define ENTYPO_ICON_DOTS_TWO_HORIZONTAL               0x0000F17C
#define ENTYPO_ICON_DOTS_TWO_VERTICAL                 0x0000F17D
#define ENTYPO_ICON_DOWNLOAD                          0x0000F17E
#define ENTYPO_ICON_DRIBBBLE                          0x0000F250
#define ENTYPO_ICON_DRIBBBLE_WITH_CIRCLE              0x0000F251
#define ENTYPO_ICON_DRINK                             0x0000F17F
#define ENTYPO_ICON_DRIVE                             0x0000F180
#define ENTYPO_ICON_DROP                              0x0000F181
#define ENTYPO_ICON_DROPBOX                           0x0000F252
#define ENTYPO_ICON_EDIT                              0x0000F182
#define ENTYPO_ICON_EMAIL                             0x0000F183
#define ENTYPO_ICON_EMOJI_FLIRT                       0x0000F184
#define ENTYPO_ICON_EMOJI_HAPPY                       0x0000F185
#define ENTYPO_ICON_EMOJI_NEUTRAL                     0x0000F186
#define ENTYPO_ICON_EMOJI_SAD                         0x0000F187
#define ENTYPO_ICON_ERASE                             0x0000F188
#define ENTYPO_ICON_ERASER                            0x0000F189
#define ENTYPO_ICON_EVERNOTE                          0x0000F253
#define ENTYPO_ICON_EXPORT                            0x0000F18A
#define ENTYPO_ICON_EYE                               0x0000F18B
#define ENTYPO_ICON_EYE_WITH_LINE                     0x0000F18C
#define ENTYPO_ICON_FACEBOOK                          0x0000F254
#define ENTYPO_ICON_FACEBOOK_WITH_CIRCLE              0x0000F255
#define ENTYPO_ICON_FEATHER                           0x0000F18D
#define ENTYPO_ICON_FINGERPRINT                       0x0000F18E
#define ENTYPO_ICON_FLAG                              0x0000F18F
#define ENTYPO_ICON_FLASH                             0x0000F190
#define ENTYPO_ICON_FLASHLIGHT                        0x0000F191
#define ENTYPO_ICON_FLAT_BRUSH                        0x0000F192
#define ENTYPO_ICON_FLATTR                            0x0000F256
#define ENTYPO_ICON_FLICKR                            0x0000F257
#define ENTYPO_ICON_FLICKR_WITH_CIRCLE                0x0000F258
#define ENTYPO_ICON_FLOW_BRANCH                       0x0000F193
#define ENTYPO_ICON_FLOW_CASCADE                      0x0000F194
#define ENTYPO_ICON_FLOW_LINE                         0x0000F195
#define ENTYPO_ICON_FLOW_PARALLEL                     0x0000F196
#define ENTYPO_ICON_FLOW_TREE                         0x0000F197
#define ENTYPO_ICON_FLOWER                            0x0000F198
#define ENTYPO_ICON_FOLDER                            0x0000F199
#define ENTYPO_ICON_FOLDER_IMAGES                     0x0000F19A
#define ENTYPO_ICON_FOLDER_MUSIC                      0x0000F19B
#define ENTYPO_ICON_FOLDER_VIDEO                      0x0000F19C
#define ENTYPO_ICON_FORWARD                           0x0000F19D
#define ENTYPO_ICON_FOURSQUARE                        0x0000F259
#define ENTYPO_ICON_FUNNEL                            0x0000F19E
#define ENTYPO_ICON_GAME_CONTROLLER                   0x0000F19F
#define ENTYPO_ICON_GAUGE                             0x0000F1A0
#define ENTYPO_ICON_GITHUB                            0x0000F25A
#define ENTYPO_ICON_GITHUB_WITH_CIRCLE                0x0000F25B
#define ENTYPO_ICON_GLOBE                             0x0000F1A1
#define ENTYPO_ICON_GOOGLE_                           0x0000F25C
#define ENTYPO_ICON_GOOGLE__WITH_CIRCLE               0x0000F25D
#define ENTYPO_ICON_GOOGLE_DRIVE                      0x0000F25E
#define ENTYPO_ICON_GOOGLE_HANGOUTS                   0x0000F25F
#define ENTYPO_ICON_GOOGLE_PLAY                       0x0000F260
#define ENTYPO_ICON_GRADUATION_CAP                    0x0000F1A2
#define ENTYPO_ICON_GRID                              0x0000F1A3
#define ENTYPO_ICON_GROOVESHARK                       0x0000F261
#define ENTYPO_ICON_HAIR_CROSS                        0x0000F1A4
#define ENTYPO_ICON_HAND                              0x0000F1A5
#define ENTYPO_ICON_HEART                             0x0000F1A6
#define ENTYPO_ICON_HEART_OUTLINED                    0x0000F1A7
#define ENTYPO_ICON_HELP                              0x0000F1A8
#define ENTYPO_ICON_HELP_WITH_CIRCLE                  0x0000F1A9
#define ENTYPO_ICON_HOME                              0x0000F1AA
#define ENTYPO_ICON_HOUR_GLASS                        0x0000F1AB
#define ENTYPO_ICON_HOUZZ                             0x0000F262
#define ENTYPO_ICON_ICLOUD                            0x0000F263
#define ENTYPO_ICON_IMAGE                             0x0000F1AC
#define ENTYPO_ICON_IMAGE_INVERTED                    0x0000F1AD
#define ENTYPO_ICON_IMAGES                            0x0000F1AE
#define ENTYPO_ICON_INBOX                             0x0000F1AF
#define ENTYPO_ICON_INFINITY                          0x0000F1B0
#define ENTYPO_ICON_INFO                              0x0000F1B1
#define ENTYPO_ICON_INFO_WITH_CIRCLE                  0x0000F1B2
#define ENTYPO_ICON_INSTAGRAM                         0x0000F264
#define ENTYPO_ICON_INSTAGRAM_WITH_CIRCLE             0x0000F265
#define ENTYPO_ICON_INSTALL                           0x0000F1B3
#define ENTYPO_ICON_KEY                               0x0000F1B4
#define ENTYPO_ICON_KEYBOARD                          0x0000F1B5
#define ENTYPO_ICON_LAB_FLASK                         0x0000F1B6
#define ENTYPO_ICON_LANDLINE                          0x0000F1B7
#define ENTYPO_ICON_LANGUAGE                          0x0000F1B8
#define ENTYPO_ICON_LAPTOP                            0x0000F1B9
#define ENTYPO_ICON_LASTFM                            0x0000F266
#define ENTYPO_ICON_LASTFM_WITH_CIRCLE                0x0000F267
#define ENTYPO_ICON_LAYERS                            0x0000F1BA
#define ENTYPO_ICON_LEAF                              0x0000F1BB
#define ENTYPO_ICON_LEVEL_DOWN                        0x0000F1BC
#define ENTYPO_ICON_LEVEL_UP                          0x0000F1BD
#define ENTYPO_ICON_LIFEBUOY                          0x0000F1BE
#define ENTYPO_ICON_LIGHT_BULB                        0x0000F1BF
#define ENTYPO_ICON_LIGHT_DOWN                        0x0000F1C0
#define ENTYPO_ICON_LIGHT_UP                          0x0000F1C1
#define ENTYPO_ICON_LINE_GRAPH                        0x0000F1C2
#define ENTYPO_ICON_LINK                              0x0000F1C3
#define ENTYPO_ICON_LINKEDIN                          0x0000F268
#define ENTYPO_ICON_LINKEDIN_WITH_CIRCLE              0x0000F269
#define ENTYPO_ICON_LIST                              0x0000F1C4
#define ENTYPO_ICON_LOCATION                          0x0000F1C5
#define ENTYPO_ICON_LOCATION_PIN                      0x0000F1C6
#define ENTYPO_ICON_LOCK                              0x0000F1C7
#define ENTYPO_ICON_LOCK_OPEN                         0x0000F1C8
#define ENTYPO_ICON_LOG_OUT                           0x0000F1C9
#define ENTYPO_ICON_LOGIN                             0x0000F1CA
#define ENTYPO_ICON_LOOP                              0x0000F1CB
#define ENTYPO_ICON_MAGNET                            0x0000F1CC
#define ENTYPO_ICON_MAGNIFYING_GLASS                  0x0000F1CD
#define ENTYPO_ICON_MAIL                              0x0000F1CE
#define ENTYPO_ICON_MAIL_WITH_CIRCLE                  0x0000F26A
#define ENTYPO_ICON_MAN                               0x0000F1CF
#define ENTYPO_ICON_MAP                               0x0000F1D0
#define ENTYPO_ICON_MASK                              0x0000F1D1
#define ENTYPO_ICON_MEDAL                             0x0000F1D2
#define ENTYPO_ICON_MEDIUM                            0x0000F26B
#define ENTYPO_ICON_MEDIUM_WITH_CIRCLE                0x0000F26C
#define ENTYPO_ICON_MEGAPHONE                         0x0000F1D3
#define ENTYPO_ICON_MENU                              0x0000F1D4
#define ENTYPO_ICON_MERGE                             0x0000F1D5
#define ENTYPO_ICON_MESSAGE                           0x0000F1D6
#define ENTYPO_ICON_MIC                               0x0000F1D7
#define ENTYPO_ICON_MINUS                             0x0000F1D8
#define ENTYPO_ICON_MIXI                              0x0000F26D
#define ENTYPO_ICON_MOBILE                            0x0000F1D9
#define ENTYPO_ICON_MODERN_MIC                        0x0000F1DA
#define ENTYPO_ICON_MOON                              0x0000F1DB
#define ENTYPO_ICON_MOUSE                             0x0000F1DC
#define ENTYPO_ICON_MOUSE_POINTER                     0x0000F1DD
#define ENTYPO_ICON_MUSIC                             0x0000F1DE
#define ENTYPO_ICON_NETWORK                           0x0000F1DF
#define ENTYPO_ICON_NEW                               0x0000F1E0
#define ENTYPO_ICON_NEW_MESSAGE                       0x0000F1E1
#define ENTYPO_ICON_NEWS                              0x0000F1E2
#define ENTYPO_ICON_NEWSLETTER                        0x0000F1E3
#define ENTYPO_ICON_NOTE                              0x0000F1E4
#define ENTYPO_ICON_NOTIFICATION                      0x0000F1E5
#define ENTYPO_ICON_NOTIFICATIONS_OFF                 0x0000F1E6
#define ENTYPO_ICON_OLD_MOBILE                        0x0000F1E7
#define ENTYPO_ICON_OLD_PHONE                         0x0000F1E8
#define ENTYPO_ICON_ONEDRIVE                          0x0000F26E
#define ENTYPO_ICON_OPEN_BOOK                         0x0000F1E9
#define ENTYPO_ICON_PALETTE                           0x0000F1EA
#define ENTYPO_ICON_PAPER_PLANE                       0x0000F1EB
#define ENTYPO_ICON_PAYPAL                            0x0000F26F
#define ENTYPO_ICON_PENCIL                            0x0000F1EC
#define ENTYPO_ICON_PHONE                             0x0000F1ED
#define ENTYPO_ICON_PICASA                            0x0000F270
#define ENTYPO_ICON_PIE_CHART                         0x0000F1EE
#define ENTYPO_ICON_PIN                               0x0000F1EF
#define ENTYPO_ICON_PINTEREST                         0x0000F271
#define ENTYPO_ICON_PINTEREST_WITH_CIRCLE             0x0000F272
#define ENTYPO_ICON_PLUS                              0x0000F1F0
#define ENTYPO_ICON_POPUP                             0x0000F1F1
#define ENTYPO_ICON_POWER_PLUG                        0x0000F1F2
#define ENTYPO_ICON_PRICE_RIBBON                      0x0000F1F3
#define ENTYPO_ICON_PRICE_TAG                         0x0000F1F4
#define ENTYPO_ICON_PRINT                             0x0000F1F5
#define ENTYPO_ICON_PROGRESS_EMPTY                    0x0000F1F6
#define ENTYPO_ICON_PROGRESS_FULL                     0x0000F1F7
#define ENTYPO_ICON_PROGRESS_ONE                      0x0000F1F8
#define ENTYPO_ICON_PROGRESS_TWO                      0x0000F1F9
#define ENTYPO_ICON_PUBLISH                           0x0000F1FA
#define ENTYPO_ICON_QQ                                0x0000F273
#define ENTYPO_ICON_QQ_WITH_CIRCLE                    0x0000F274
#define ENTYPO_ICON_QUOTE                             0x0000F1FB
#define ENTYPO_ICON_RADIO                             0x0000F1FC
#define ENTYPO_ICON_RAFT                              0x0000F275
#define ENTYPO_ICON_RAFT_WITH_CIRCLE                  0x0000F276
#define ENTYPO_ICON_RAINBOW                           0x0000F277
#define ENTYPO_ICON_RDIO                              0x0000F278
#define ENTYPO_ICON_RDIO_WITH_CIRCLE                  0x0000F279
#define ENTYPO_ICON_REMOVE_USER                       0x0000F1FD
#define ENTYPO_ICON_RENREN                            0x0000F27A
#define ENTYPO_ICON_REPLY                             0x0000F1FE
#define ENTYPO_ICON_REPLY_ALL                         0x0000F1FF
#define ENTYPO_ICON_RESIZE_100_                       0x0000F200
#define ENTYPO_ICON_RESIZE_FULL_SCREEN                0x0000F201
#define ENTYPO_ICON_RETWEET                           0x0000F202
#define ENTYPO_ICON_ROCKET                            0x0000F203
#define ENTYPO_ICON_ROUND_BRUSH                       0x0000F204
#define ENTYPO_ICON_RSS                               0x0000F205
#define ENTYPO_ICON_RULER                             0x0000F206
#define ENTYPO_ICON_SAVE                              0x0000F207
#define ENTYPO_ICON_SCISSORS                          0x0000F208
#define ENTYPO_ICON_SCRIBD                            0x0000F27B
#define ENTYPO_ICON_SELECT_ARROWS                     0x0000F209
#define ENTYPO_ICON_SHARE                             0x0000F20A
#define ENTYPO_ICON_SHARE_ALTERNATIVE                 0x0000F20B
#define ENTYPO_ICON_SHAREABLE                         0x0000F20C
#define ENTYPO_ICON_SHIELD                            0x0000F20D
#define ENTYPO_ICON_SHOP                              0x0000F20E
#define ENTYPO_ICON_SHOPPING_BAG                      0x0000F20F
#define ENTYPO_ICON_SHOPPING_BASKET                   0x0000F210
#define ENTYPO_ICON_SHOPPING_CART                     0x0000F211
#define ENTYPO_ICON_SHUFFLE                           0x0000F212
#define ENTYPO_ICON_SIGNAL                            0x0000F213
#define ENTYPO_ICON_SINA_WEIBO                        0x0000F27C
#define ENTYPO_ICON_SKYPE                             0x0000F27D
#define ENTYPO_ICON_SKYPE_WITH_CIRCLE                 0x0000F27E
#define ENTYPO_ICON_SLIDESHARE                        0x0000F27F
#define ENTYPO_ICON_SMASHING                          0x0000F280
#define ENTYPO_ICON_SOUND                             0x0000F214
#define ENTYPO_ICON_SOUND_MIX                         0x0000F215
#define ENTYPO_ICON_SOUND_MUTE                        0x0000F216
#define ENTYPO_ICON_SOUNDCLOUD                        0x0000F281
#define ENTYPO_ICON_SPORTS_CLUB                       0x0000F217
#define ENTYPO_ICON_SPOTIFY                           0x0000F282
#define ENTYPO_ICON_SPOTIFY_WITH_CIRCLE               0x0000F283
#define ENTYPO_ICON_SPREADSHEET                       0x0000F218
#define ENTYPO_ICON_SQUARED_CROSS                     0x0000F219
#define ENTYPO_ICON_SQUARED_MINUS                     0x0000F21A
#define ENTYPO_ICON_SQUARED_PLUS                      0x0000F21B
#define ENTYPO_ICON_STAR                              0x0000F21C
#define ENTYPO_ICON_STAR_OUTLINED                     0x0000F21D
#define ENTYPO_ICON_STOPWATCH                         0x0000F21E
#define ENTYPO_ICON_STUMBLEUPON                       0x0000F284
#define ENTYPO_ICON_STUMBLEUPON_WITH_CIRCLE           0x0000F285
#define ENTYPO_ICON_SUITCASE                          0x0000F21F
#define ENTYPO_ICON_SWAP                              0x0000F220
#define ENTYPO_ICON_SWARM                             0x0000F286
#define ENTYPO_ICON_SWEDEN                            0x0000F221
#define ENTYPO_ICON_SWITCH                            0x0000F222
#define ENTYPO_ICON_TABLET                            0x0000F223
#define ENTYPO_ICON_TABLET_MOBILE_COMBO               0x0000F224
#define ENTYPO_ICON_TAG                               0x0000F225
#define ENTYPO_ICON_TEXT                              0x0000F226
#define ENTYPO_ICON_TEXT_DOCUMENT                     0x0000F227
#define ENTYPO_ICON_TEXT_DOCUMENT_INVERTED            0x0000F228
#define ENTYPO_ICON_THERMOMETER                       0x0000F229
#define ENTYPO_ICON_THUMBS_DOWN                       0x0000F22A
#define ENTYPO_ICON_THUMBS_UP                         0x0000F22B
#define ENTYPO_ICON_THUNDER_CLOUD                     0x0000F22C
#define ENTYPO_ICON_TICKET                            0x0000F22D
#define ENTYPO_ICON_TIME_SLOT                         0x0000F22E
#define ENTYPO_ICON_TOOLS                             0x0000F22F
#define ENTYPO_ICON_TRAFFIC_CONE                      0x0000F230
#define ENTYPO_ICON_TRASH                             0x0000F231
#define ENTYPO_ICON_TREE                              0x0000F232
#define ENTYPO_ICON_TRIANGLE_DOWN                     0x0000F233
#define ENTYPO_ICON_TRIANGLE_LEFT                     0x0000F234
#define ENTYPO_ICON_TRIANGLE_RIGHT                    0x0000F235
#define ENTYPO_ICON_TRIANGLE_UP                       0x0000F236
#define ENTYPO_ICON_TRIPADVISOR                       0x0000F287
#define ENTYPO_ICON_TROPHY                            0x0000F237
#define ENTYPO_ICON_TUMBLR                            0x0000F288
#define ENTYPO_ICON_TUMBLR_WITH_CIRCLE                0x0000F289
#define ENTYPO_ICON_TV                                0x0000F238
#define ENTYPO_ICON_TWITTER                           0x0000F28A
#define ENTYPO_ICON_TWITTER_WITH_CIRCLE               0x0000F28B
#define ENTYPO_ICON_TYPING                            0x0000F239
#define ENTYPO_ICON_UNINSTALL                         0x0000F23A
#define ENTYPO_ICON_UNREAD                            0x0000F23B
#define ENTYPO_ICON_UNTAG                             0x0000F23C
#define ENTYPO_ICON_UPLOAD                            0x0000F23D
#define ENTYPO_ICON_UPLOAD_TO_CLOUD                   0x0000F23E
#define ENTYPO_ICON_USER                              0x0000F23F
#define ENTYPO_ICON_USERS                             0x0000F240
#define ENTYPO_ICON_V_CARD                            0x0000F241
#define ENTYPO_ICON_VIDEO                             0x0000F242
#define ENTYPO_ICON_VIDEO_CAMERA                      0x0000F243
#define ENTYPO_ICON_VIMEO                             0x0000F28C
#define ENTYPO_ICON_VIMEO_WITH_CIRCLE                 0x0000F28D
#define ENTYPO_ICON_VINE                              0x0000F28E
#define ENTYPO_ICON_VINE_WITH_CIRCLE                  0x0000F28F
#define ENTYPO_ICON_VINYL                             0x0000F244
#define ENTYPO_ICON_VK                                0x0000F290
#define ENTYPO_ICON_VK_ALTERNITIVE                    0x0000F291
#define ENTYPO_ICON_VK_WITH_CIRCLE                    0x0000F292
#define ENTYPO_ICON_VOICEMAIL                         0x0000F245
#define ENTYPO_ICON_WALLET                            0x0000F246
#define ENTYPO_ICON_WARNING                           0x0000F247
#define ENTYPO_ICON_WATER                             0x0000F248
#define ENTYPO_ICON_WINDOWS_STORE                     0x0000F293
#define ENTYPO_ICON_XING                              0x0000F294
#define ENTYPO_ICON_XING_WITH_CIRCLE                  0x0000F295
#define ENTYPO_ICON_YELP                              0x0000F296
#define ENTYPO_ICON_YOUKO                             0x0000F297
#define ENTYPO_ICON_YOUKO_WITH_CIRCLE                 0x0000F298
#define ENTYPO_ICON_YOUTUBE                           0x0000F299
#define ENTYPO_ICON_YOUTUBE_WITH_CIRCLE               0x0000F29A

#endif // DOXYGEN_SHOULD_SKIP_THIS
