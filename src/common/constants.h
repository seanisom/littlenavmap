/*****************************************************************************
* Copyright 2015-2017 Alexander Barthel albar965@mailbox.org
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
*****************************************************************************/

#ifndef LITTLENAVMAP_CONSTANTS_H
#define LITTLENAVMAP_CONSTANTS_H

/* Define to skip caching of approaches when loading */
// #define DEBUG_APPROACH_NO_CACHE

/* Paint additional information useful for debugging for approaches */
// #define DEBUG_APPROACH_PAINT
// #define DEBUG_ROUTE_PAINT

/* Use Shift+Ctrl-Mousemove to simulate an aircraft */
// #define DEBUG_MOVING_AIRPLANE

// #define DEBUG_CREATE_WINDOW_STATE

#include "geo/pos.h"

const atools::geo::Pos MAG_NORTH_POLE_2007 = atools::geo::Pos(-120.72f, 83.95f, 0.f);
const atools::geo::Pos MAG_SOUTH_POLE_2007 = atools::geo::Pos(137.684f, -64.497f, 0.f);

/* If width and height of a bounding rect are smaller than this use show point */
const float POS_IS_POINT_EPSILON = 0.0001f;

namespace lnm {

// or "release/1.2"
const QString HELP_BRANCH = "master";

/* Important: keep slash at the end. Otherwise Gitbook will not display the page properly */
const QString HELP_ONLINE_URL(
  "https://albar965.gitbooks.io/little-navmap-user-manual/content/v/" + HELP_BRANCH + "/${LANG}/");

const QString HELP_LEGEND_INLINE_URL("help/legend-${LANG}.html");

const QString HELP_OFFLINE_URL("help/little-navmap-user-manual-${LANG}.pdf");

/* Supported languages for the online help system. Will be determined by the
 * installation of offline PDF manual. */
const QStringList helpLanguages();

/* State of "do not show again" dialog buttons */
const QString ACTIONS_SHOWDISCONNECTINFO = "Actions/ShowDisconnectInfo";
const QString ACTIONS_SHOWQUIT = "Actions/ShowQuit";
const QString ACTIONS_SHOW_INVALID_PROC_WARNING = "Actions/ShowInvalidProcedure";
const QString ACTIONS_SHOWRESETVIEW = "Actions/ShowResetView";
const QString ACTIONS_SHOWROUTEPARKINGWARNING = "Actions/ShowRouteParkingWarning";
const QString ACTIONS_SHOWROUTEWARNING = "Actions/ShowRouteWarning";
const QString ACTIONS_SHOWROUTE_ERROR = "Actions/ShowRouteError";
const QString ACTIONS_SHOWROUTE_PROC_ERROR = "Actions/ShowRouteProcedureError";
const QString ACTIONS_SHOWROUTE_START_CHANGED = "Actions/ShowRouteStartChanged";

/* Other setting key names */
const QString DATABASE_BASEPATH = "Database/BasePath";
const QString DATABASE_LOADINGSIMULATOR = "Database/LoadingSimulator";
const QString DATABASE_PATHS = "Database/Paths";
const QString DATABASE_SCENERYCONFIG = "Database/SceneryConfig";
const QString DATABASE_SIMULATOR = "Database/Simulator";
const QString DATABASE_LOAD_INACTIVE = "Database/LoadInactive";
const QString EXPORT_FILEDIALOG = "Export/FileDialog";
const QString INFOWINDOW_CURRENTMAPOBJECTS = "InfoWindow/CurrentMapObjects";
const QString INFOWINDOW_WIDGET = "InfoWindow/Widget";
const QString MAINWINDOW_FIRSTAPPLICATIONSTART = "MainWindow/FirstApplicationStart";
const QString MAINWINDOW_WIDGET = "MainWindow/Widget";
const QString MAINWINDOW_WIDGET_STATE = "MainWindow/WidgetState";
const QString MAINWINDOW_WIDGET_STATE_POS = "MainWindow/WidgetStatePosition";
const QString MAINWINDOW_WIDGET_STATE_SIZE = "MainWindow/WidgetStateSize";
const QString MAINWINDOW_WIDGET_STATE_MAXIMIZED = "MainWindow/WidgetStateMaximized";
const QString MAINWINDOW_PRINT_SIZE = "MainWindow/PrintPreviewSize";
const QString MAP_DETAILFACTOR = "Map/DetailFactor";
const QString MAP_DISTANCEMARKERS = "Map/DistanceMarkers";
const QString MAP_AIRSPACES = "Map/Airspaces";
const QString MAP_HOMEDISTANCE = "Map/HomeDistance";
const QString MAP_HOMELATY = "Map/HomeLatY";
const QString MAP_HOMELONX = "Map/HomeLonX";
const QString MAP_KMLFILES = "Map/KmlFiles";
const QString MAP_MARKLATY = "Map/MarkLatY";
const QString MAP_MARKLONX = "Map/MarkLonX";
const QString MAP_RANGEMARKERS = "Map/RangeMarkers";
const QString MAP_OVERLAY_VISIBLE = "Map/OverlayVisible";
const QString NAVCONNECT_REMOTEHOSTS = "NavConnect/RemoteHosts";
const QString NAVCONNECT_REMOTE = "NavConnect/Remote";
const QString ROUTE_FILENAME = "Route/Filename";
const QString ROUTE_FILENAMESRECENT = "Route/FilenamesRecent";
const QString ROUTE_FILENAMESKMLRECENT = "Route/FilenamesKmlRecent";
const QString ROUTE_VIEW = "Route/View";
const QString ROUTE_PRINT_DIALOG = "Route/PrintWidget";
const QString ROUTE_STRING_DIALOG_SIZE = "Route/StringDialogSize";
const QString ROUTE_STRING_DIALOG_SPLITTER = "Route/StringDialogSplitter";
const QString ROUTE_STRING_DIALOG_OPTIONS = "Route/StringDialogOptions";
const QString SEARCHTAB_AIRPORT_WIDGET = "SearchPaneAirport/Widget";
const QString SEARCHTAB_NAV_WIDGET = "SearchPaneNav/Widget";
const QString SEARCHTAB_AIRPORT_VIEW_WIDGET = "SearchPaneAirport/WidgetView";
const QString SEARCHTAB_AIRPORT_VIEW_DIST_WIDGET = "SearchPaneAirport/WidgetDistView";
const QString SEARCHTAB_NAV_VIEW_WIDGET = "SearchPaneNav/WidgetView";
const QString SEARCHTAB_NAV_VIEW_DIST_WIDGET = "SearchPaneNav/WidgetDistView";

/* General settings in the configuration file not covered by any GUI elements */
const QString SETTINGS_INFOQUERY = "Settings/InfoQuery";
const QString SETTINGS_MAPQUERY = "Settings/MapQuery";
const QString SETTINGS_DATABASE = "Settings/Database";

const QString APPROACHTREE_WIDGET = "ApproachTree/Widget";
const QString APPROACHTREE_SELECTED_WIDGET = "ApproachTree/WidgetSelected";
const QString APPROACHTREE_STATE = "ApproachTree/TreeState";
const QString APPROACHTREE_AIRPORT = "ApproachTree/Airport";
const QString APPROACHTREE_SELECTED_APPR = "ApproachTree/SeletedApproach";

/* Options dialog */
const QString OPTIONS_DIALOG_WIDGET = "OptionsDialog/Widget";
const QString OPTIONS_DIALOG_AS_FILE_DLG = "OptionsDialog/WeatherFileDialogAsn";
const QString OPTIONS_DIALOG_GLOBE_FILE_DLG = "OptionsDialog/CacheFileDialogGlobe";
const QString OPTIONS_DIALOG_DB_FILE_DLG = "OptionsDialog/DatabaseFileDialog";
const QString OPTIONS_DIALOG_DB_EXCLUDE = "OptionsDialog/DatabaseExclude";
const QString OPTIONS_DIALOG_DB_ADDON_EXCLUDE = "OptionsDialog/DatabaseAddonExclude";
const QString OPTIONS_DIALOG_FLIGHTPLAN_COLOR = "OptionsDialog/FlightplanColor";
const QString OPTIONS_DIALOG_FLIGHTPLAN_PROCEDURE_COLOR = "OptionsDialog/FlightplanProcedureColor";
const QString OPTIONS_DIALOG_FLIGHTPLAN_ACTIVE_COLOR = "OptionsDialog/FlightplanActiveColor";
const QString OPTIONS_DIALOG_TRAIL_COLOR = "OptionsDialog/TrailColor";
const QString OPTIONS_DIALOG_DISPLAY_OPTIONS = "OptionsDialog/DisplayOptions";
const QString OPTIONS_DIALOG_GUI_STYLE_INDEX = "OptionsDialog/GuiStyleIndex";
const QString OPTIONS_DIALOG_WARN_STYLE = "OptionsDialog/StyleWarning";

/* Other options that are only accessible in the configuration file */
const QString OPTIONS_LANGUAGE = "Options/Language";
const QString OPTIONS_MARBLE_DEBUG = "Options/MarbleDebug";
const QString OPTIONS_CONNECTCLIENT_DEBUG = "Options/ConnectClientDebug";
const QString OPTIONS_DATAREADER_DEBUG = "Options/DataReaderDebug";
const QString OPTIONS_VERSION = "Options/Version";

/* File dialog patterns */
#if defined(Q_OS_WIN32)
const QString FILE_PATTERN_SCENERYCONFIG = "(*.cfg)";
const QString FILE_PATTERN_FLIGHTPLAN = "(*.pln)";
const QString FILE_PATTERN_GFP = "(*.gfp)";
const QString FILE_PATTERN_RTE = "(*.rte)";
const QString FILE_PATTERN_FLP = "(*.flp)";
const QString FILE_PATTERN_FMS = "(*.fms)";
const QString FILE_PATTERN_GPX = "(*.gpx)";
const QString FILE_PATTERN_KML = "(*.kml *.kmz)";
#else
// Use more or less case insensitive patters for Linux
const QString FILE_PATTERN_SCENERYCONFIG = "(*.cfg *.Cfg *.CFG)";
const QString FILE_PATTERN_FLIGHTPLAN = "(*.pln *.Pln *.PLN)";
const QString FILE_PATTERN_GFP = "(*.gfp *.Gfp *.GFP)";
const QString FILE_PATTERN_RTE = "(*.rte *.Rte *.RTE)";
const QString FILE_PATTERN_FLP = "(*.flp *.Flp *.FLP)";
const QString FILE_PATTERN_FMS = "(*.fms *.Fms *.FMS)";
const QString FILE_PATTERN_GPX = "(*.gpx *.Gpx *.GPX)";
const QString FILE_PATTERN_KML = "(*.kml *.KML *.kmz *.KMZ)";
#endif
const QString FILE_PATTERN_AS_SNAPSHOT = "(current_wx_snapshot.txt)";

const QString FILE_PATTERN_IMAGE = "(*.jpg *.jpeg *.png *.bmp)";

/* Sqlite database names */
const QString DATABASE_DIR = "little_navmap_db";
const QString DATABASE_PREFIX = "little_navmap_";
const QString DATABASE_SUFFIX = ".sqlite";
const QString DATABASE_BACKUP_SUFFIX = "-backup";

/* This is the default configuration file for reading the scenery library.
 * It can be overridden by placing a  file with the same name into
 * the configuration directory. */
const QString DATABASE_NAVDATAREADER_CONFIG = ":/littlenavmap/resources/config/navdatareader.cfg";

const int MAINWINDOW_STATE_VERSION = 0;

/* Main window state for first startup. Generated in MainWindow::writeSettings() */
const unsigned char DEFAULT_MAINWINDOW_STATE[841] =
{
  0x0, 0x0, 0x0, 0xff, 0x0, 0x0, 0x0, 0x0, 0xfd, 0x0, 0x0, 0x0, 0x2, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x84, 0x0, 0x0,
  0x3, 0x10, 0xfc, 0x2, 0x0, 0x0, 0x0, 0x2, 0xfb, 0x0, 0x0, 0x0, 0x1e, 0x0, 0x64, 0x0, 0x6f, 0x0, 0x63, 0x0, 0x6b, 0x0,
  0x57, 0x0, 0x69, 0x0, 0x64, 0x0, 0x67, 0x0, 0x65, 0x0, 0x74, 0x0, 0x52, 0x0, 0x6f, 0x0, 0x75, 0x0, 0x74, 0x0, 0x65,
  0x1, 0x0, 0x0, 0x0, 0x61, 0x0, 0x0, 0x1, 0x81, 0x0, 0x0, 0x0, 0x83, 0x0, 0xff, 0xff, 0xff, 0xfb, 0x0, 0x0, 0x0, 0x2a,
  0x0, 0x64, 0x0, 0x6f, 0x0, 0x63, 0x0, 0x6b, 0x0, 0x57, 0x0, 0x69, 0x0, 0x64, 0x0, 0x67, 0x0, 0x65, 0x0, 0x74, 0x0,
  0x49, 0x0, 0x6e, 0x0, 0x66, 0x0, 0x6f, 0x0, 0x72, 0x0, 0x6d, 0x0, 0x61, 0x0, 0x74, 0x0, 0x69, 0x0, 0x6f, 0x0, 0x6e,
  0x1, 0x0, 0x0, 0x1, 0xe8, 0x0, 0x0, 0x1, 0x89, 0x0, 0x0, 0x0, 0x7b, 0x0, 0xff, 0xff, 0xff, 0x0, 0x0, 0x0, 0x1, 0x0,
  0x0, 0x3, 0x76, 0x0, 0x0, 0x3, 0x10, 0xfc, 0x2, 0x0, 0x0, 0x0, 0x2, 0xfc, 0x0, 0x0, 0x0, 0x61, 0x0, 0x0, 0x3, 0x10,
  0x0, 0x0, 0x2, 0x70, 0x0, 0xff, 0xff, 0xff, 0xfc, 0x2, 0x0, 0x0, 0x0, 0x2, 0xfc, 0x0, 0x0, 0x0, 0x61, 0x0, 0x0, 0x2,
  0x6e, 0x0, 0x0, 0x2, 0x1f, 0x0, 0xff, 0xff, 0xff, 0xfc, 0x1, 0x0, 0x0, 0x0, 0x2, 0xfb, 0x0, 0x0, 0x0, 0x1a, 0x0,
  0x64, 0x0, 0x6f, 0x0, 0x63, 0x0, 0x6b, 0x0, 0x57, 0x0, 0x69, 0x0, 0x64, 0x0, 0x67, 0x0, 0x65, 0x0, 0x74, 0x0, 0x4d,
  0x0, 0x61, 0x0, 0x70, 0x1, 0x0, 0x0, 0x1, 0x8a, 0x0, 0x0, 0x1, 0x43, 0x0, 0x0, 0x0, 0x38, 0x0, 0xff, 0xff, 0xff,
  0xfc, 0x0, 0x0, 0x2, 0xd3, 0x0, 0x0, 0x2, 0x2d, 0x0, 0x0, 0x2, 0x2d, 0x0, 0xff, 0xff, 0xff, 0xfc, 0x2, 0x0, 0x0, 0x0,
  0x2, 0xfb, 0x0, 0x0, 0x0, 0x20, 0x0, 0x64, 0x0, 0x6f, 0x0, 0x63, 0x0, 0x6b, 0x0, 0x57, 0x0, 0x69, 0x0, 0x64, 0x0,
  0x67, 0x0, 0x65, 0x0, 0x74, 0x0, 0x53, 0x0, 0x65, 0x0, 0x61, 0x0, 0x72, 0x0, 0x63, 0x0, 0x68, 0x1, 0x0, 0x0, 0x0,
  0x61, 0x0, 0x0, 0x1, 0xdb, 0x0, 0x0, 0x1, 0x9e, 0x0, 0xff, 0xff, 0xff, 0xfb, 0x0, 0x0, 0x0, 0x24, 0x0, 0x64, 0x0,
  0x6f, 0x0, 0x63, 0x0, 0x6b, 0x0, 0x57, 0x0, 0x69, 0x0, 0x64, 0x0, 0x67, 0x0, 0x65, 0x0, 0x74, 0x0, 0x41, 0x0, 0x69,
  0x0, 0x72, 0x0, 0x63, 0x0, 0x72, 0x0, 0x61, 0x0, 0x66, 0x0, 0x74, 0x1, 0x0, 0x0, 0x2, 0x42, 0x0, 0x0, 0x0, 0x8d, 0x0,
  0x0, 0x0, 0x7b, 0x0, 0xff, 0xff, 0xff, 0xfb, 0x0, 0x0, 0x0, 0x26, 0x0, 0x64, 0x0, 0x6f, 0x0, 0x63, 0x0, 0x6b, 0x0,
  0x57, 0x0, 0x69, 0x0, 0x64, 0x0, 0x67, 0x0, 0x65, 0x0, 0x74, 0x0, 0x45, 0x0, 0x6c, 0x0, 0x65, 0x0, 0x76, 0x0, 0x61,
  0x0, 0x74, 0x0, 0x69, 0x0, 0x6f, 0x0, 0x6e, 0x1, 0x0, 0x0, 0x2, 0xd5, 0x0, 0x0, 0x0, 0x9c, 0x0, 0x0, 0x0, 0x4b, 0x0,
  0xff, 0xff, 0xff, 0xfb, 0x0, 0x0, 0x0, 0x20, 0x0, 0x64, 0x0, 0x6f, 0x0, 0x63, 0x0, 0x6b, 0x0, 0x57, 0x0, 0x69, 0x0,
  0x64, 0x0, 0x67, 0x0, 0x65, 0x0, 0x74, 0x0, 0x4c, 0x0, 0x65, 0x0, 0x67, 0x0, 0x65, 0x0, 0x6e, 0x0, 0x64, 0x2, 0x0,
  0x0, 0x2, 0x44, 0x0, 0x0, 0x0, 0x68, 0x0, 0x0, 0x2, 0x4e, 0x0, 0x0, 0x2, 0xcc, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3,
  0x10, 0x0, 0x0, 0x0, 0x4, 0x0, 0x0, 0x0, 0x4, 0x0, 0x0, 0x0, 0x8, 0x0, 0x0, 0x0, 0x8, 0xfc, 0x0, 0x0, 0x0, 0x3, 0x0,
  0x0, 0x0, 0x2, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, 0x0, 0x0, 0x0, 0x3, 0x0, 0x0, 0x0, 0x16, 0x0, 0x74, 0x0, 0x6f,
  0x0, 0x6f, 0x0, 0x6c, 0x0, 0x42, 0x0, 0x61, 0x0, 0x72, 0x0, 0x4d, 0x0, 0x61, 0x0, 0x69, 0x0, 0x6e, 0x1, 0x0, 0x0,
  0x0, 0x0, 0xff, 0xff, 0xff, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x14, 0x0, 0x74, 0x0, 0x6f,
  0x0, 0x6f, 0x0, 0x6c, 0x0, 0x42, 0x0, 0x61, 0x0, 0x72, 0x0, 0x4d, 0x0, 0x61, 0x0, 0x70, 0x1, 0x0, 0x0, 0x0, 0x73,
  0xff, 0xff, 0xff, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x22, 0x0, 0x74, 0x0, 0x6f, 0x0, 0x6f,
  0x0, 0x6c, 0x0, 0x62, 0x0, 0x61, 0x0, 0x72, 0x0, 0x4d, 0x0, 0x61, 0x0, 0x70, 0x0, 0x4f, 0x0, 0x70, 0x0, 0x74, 0x0,
  0x69, 0x0, 0x6f, 0x0, 0x6e, 0x0, 0x73, 0x1, 0x0, 0x0, 0x1, 0x78, 0xff, 0xff, 0xff, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0,
  0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, 0x0, 0x0, 0x0, 0x3, 0x0, 0x0, 0x0, 0x18, 0x0, 0x74, 0x0, 0x6f, 0x0, 0x6f, 0x0,
  0x6c, 0x0, 0x42, 0x0, 0x61, 0x0, 0x72, 0x0, 0x52, 0x0, 0x6f, 0x0, 0x75, 0x0, 0x74, 0x0, 0x65, 0x1, 0x0, 0x0, 0x0,
  0x0, 0xff, 0xff, 0xff, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x20, 0x0, 0x74, 0x0, 0x6f, 0x0,
  0x6f, 0x0, 0x6c, 0x0, 0x42, 0x0, 0x61, 0x0, 0x72, 0x0, 0x41, 0x0, 0x69, 0x0, 0x72, 0x0, 0x73, 0x0, 0x70, 0x0, 0x61,
  0x0, 0x63, 0x0, 0x65, 0x0, 0x73, 0x1, 0x0, 0x0, 0x1, 0xb1, 0xff, 0xff, 0xff, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
  0x0, 0x0, 0x0, 0x0, 0x16, 0x0, 0x74, 0x0, 0x6f, 0x0, 0x6f, 0x0, 0x6c, 0x0, 0x42, 0x0, 0x61, 0x0, 0x72, 0x0, 0x56,
  0x0, 0x69, 0x0, 0x65, 0x0, 0x77, 0x1, 0x0, 0x0, 0x2, 0xa8, 0x0, 0x0, 0x2, 0x58, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
  0x0
};
} // namespace lnm

#endif // LITTLENAVMAP_CONSTANTS_H
