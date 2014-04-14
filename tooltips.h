
#ifndef __H__PROMESH_TOOLTIPS
#define __H__PROMESH_TOOLTIPS

//	camera tools
#define	TOOLTIP_CENTER_OBJECT "Centers the current object."
#define	TOOLTIP_SLIDER_TEST "Tests the DoubleSlider."
#define	TOOLTIP_CENTER_SELECTION "Centers the current selection."
#define TOOLTIP_TOP_VIEW "View the current scene from the top."
#define	TOOLTIP_FRONT_VIEW "View the current scene from the front."
#define	TOOLTIP_SIDE_VIEW "View the current scene from the side."
#define	TOOLTIP_HIDE_SELECTED_ELEMENTS "Hides all currently selected elements."
#define	TOOLTIP_UNHIDE_ELEMENTS "Unhides all hidden elements."

// grid generation tools
#define	TOOLTIP_NEW_OBJECT "Creates a new empty object."
#define	TOOLTIP_MERGE_OBJECTS "Merges the selected objects into a new one."
#define	TOOLTIP_CREATE_VERTEX "Creates a new vertex"
#define	TOOLTIP_CREATE_EDGE "Creates an edge between two selected vertices."
#define	TOOLTIP_CREATE_FACE "Creates a face between selected vertices."
#define	TOOLTIP_CREATE_VOLUME "Creates a volume between selected vertices."
#define	TOOLTIP_CREATE_PLANE "Creates a plane."
#define	TOOLTIP_CREATE_CIRCLE "Creates a circle."
#define	TOOLTIP_CREATE_BOX "Creates a box."
#define	TOOLTIP_CREATE_SPHERE "Creates a sphere."
#define	TOOLTIP_CREATE_TETRAHEDRON "Creates a tetrahedron."
#define	TOOLTIP_CREATE_PYRAMID "Creates a pyramid."
#define	TOOLTIP_CREATE_PRISM "Creates a prism."
#define	TOOLTIP_CREATE_DUALGRID "creates the dual grid consisting of control volumes as used in the finite volume method" 

//remeshing tools
#define	TOOLTIP_CONVERT_TO_TRIANGLES "Converts selected quadrilaterals to triangles."
#define	TOOLTIP_TRIANGLE_FILL "Performs triangle fill using the sweep-line algorithm."
#define	TOOLTIP_RETRIANGULATE "Inserts vertices as required and performs Constrained Delaunay triangulation."
#define	TOOLTIP_ADJUST_EDGE_LENGTH "Remeshes the active grid so that all edges approximatly have a certain length."
#define	TOOLTIP_ADAPT_SURFACE_TO_CYLINDER "Introduces edges in a grid around a selected vertex which roughly correspond to the intersection of a cylinder with the surface."
#define	TOOLTIP_TETRAHEDRALIZE "Fills a closed surface with tetrahedrons."
#define	TOOLTIP_ASSIGN_VOLUME_CONSTRAINTS "Assigns volume constraints to selected tetrahedrons."
#define	TOOLTIP_CLEAR_VOLUME_CONSTRAINTS "Clears all assigned volume constraints."
#define	TOOLTIP_RETETRAHEDRALIZE "Given a tetrahedralization and volume constraints, this method adapts the tetrahedrons."
#define	TOOLTIP_DUPLICATE "Duplicates the selected geometry."
#define	TOOLTIP_EXTRUDE "Extrudes selected geometry (vertices, edges, faces)."
#define	TOOLTIP_EXTRUDE_CYLINDERS "Extrudes cylinders around selected points of a 2d manifold."

//refinement tools
#define	TOOLTIP_REFINE "Refines selected elements and builds a regular closure."
#define	TOOLTIP_HANGING_NODE_REFINE "Refines selected elements using hanging nodes"
#define	TOOLTIP_REFINE_SMOOTH "Refines selected elements using piecewise smooth refinement."
#define	TOOLTIP_REFINE_SMOOTH_BOUNDARY_2D "Refines selected elements using smooth subdivision rules on the boundary edges."
#define	TOOLTIP_FRACTURED_MEDIA_REFINE "Refines selected elements using hanging nodes. Fractures are refined anisotropic."
#define	TOOLTIP_CREATE_FRACTAL "Refines the whole geometry using a fractal-refinement scheme-"
#define	TOOLTIP_INSERT_CENTER "Inserts a central vertex in all selected elements."


//topology tools
#define TOOLTIP_RESOLVE_SELF_INTERSECTIONS "Resolves self intersections of faces and edges."
#define	TOOLTIP_RESOLVE_EDGE_INTERSECTIONS "Makes sure that all edge intersections are represented by a vertex."
#define	TOOLTIP_RESOLVE_TRIANGLE_INTERSECTIONS "Makes sure that all triangle intersections are represented by an edge and vertices."
#define	TOOLTIP_PROJECT_VERTICES_TO_CLOSE_EDGES "Projects selected vertices to selected close edges."
#define	TOOLTIP_PROJECT_VERTICES_TO_CLOSE_FACES "Projects selected vertices to selected close faces."
#define	TOOLTIP_INTERSECT_CLOSE_EDGES "Performs intersections between selected close edges."
#define	TOOLTIP_ERASE_SELECTED_ELEMENTS "Erases selected elements and associated unreferenced geometry."
#define	TOOLTIP_REMOVE_DOUBLES "Removes selected vertices that are close to each other"
#define	TOOLTIP_REMOVE_DOUBLE_EDGES "Removes selected doubles of selected edges."
#define	TOOLTIP_MERGE_AT_FIRST "Merges all selected objects into a single vertex at the first selected vertex."
#define	TOOLTIP_MERGE_AT_CENTER "Merges all selected objects into a single vertex at the center of the selection."
#define	TOOLTIP_MERGE_AT_LAST "Merges all selected objects into a single vertex at the last selected vertex."
#define	TOOLTIP_COLLAPSE_EDGE "Collapses the edge and removes adjacent triangles."
#define	TOOLTIP_SPLIT_EDGE "Splits the edge and inserts new triangles."
#define	TOOLTIP_SWAP_EDGE "Swaps selected edges that are adjacent to exactly two triangles."
#define	TOOLTIP_PLANE_CUT "Cuts selected edges along the given plane."
#define	TOOLTIP_ADJUST_EDGE_ORIENTATION "Adjusts the orientation of boundary edges to associated faces."
#define	TOOLTIP_FIX_FACE_ORIENTATION "Tries to change orientation of selected faces so that all neighbouring faces point into the same direction. Only works correctly for manifold selections."
#define	TOOLTIP_FIX_FACE_SUBSET_ORIENTATIONS "Iterates over all subset and tries to fix face orientation for each. Only works correctly for manifold subsets."
#define	TOOLTIP_FIX_VOLUME_ORIENTATION "Changes orientation of selected volumes, so that they are oriented correctly."
#define	TOOLTIP_INVERT_FACE_ORIENTATION "Inverts the orientation of all selected faces."

//info tools
#define	TOOLTIP_PRINT_SELECTION_CENTER "Calculates and prints the position of the center of the current selection."
#define	TOOLTIP_PRINT_GEOMETRY_INFO "Prints info about the current geometry"
#define	TOOLTIP_PRINT_FACE_QUALITY "Prints the quality of selected faces"
#define	TOOLTIP_PRINT_SELECTION_INFO "Prints the quantities of selected elements"
#define	TOOLTIP_PRINT_SELECTION_CONTAINING_SUBSETS "Prints subset indices of all subsets, which contain a selected element."
#define	TOOLTIP_PRINT_VERTEX_DISTANCE "Prints the min and max distance of vertices of selected elements."
#define	TOOLTIP_PRINT_LEAST_SQUARES_PLANE "Prints the position and normal of the least squares fitting plane"

//subset tools
#define TOOLTIP_SET_SUBSET_NAME ""
#define	TOOLTIP_ASSIGN_SUBSET "Assigns the selected elements to a subset."
#define	TOOLTIP_ASSIGN_SUBSET_COLORS "assigns subset colors by a procedural scheme."
#define	TOOLTIP_SEPARATE_FACES_BY_EDGE_SUBSETS "Assigns faces that are surrounded by a set of edge-subsets to a common subset."
#define	TOOLTIP_SEPARATE_FACES_BY_SELECTED_EDGES "Assigns faces that are surrounded by a set of selected edges to a common subset."
#define	TOOLTIP_SEPARATE_VOLUMES_BY_FACE_SUBSETS "Assigns volumes that are surrounded by a set of face-subsets to a common subset."
#define	TOOLTIP_SEPARATE_VOLUMES_BY_SELECTED_FACES "Assigns volumes that are surrounded by a set of selected faces to a common subset."
#define	TOOLTIP_SEPARATE_IRREGULAR_MANIFOLD_SUBSETS "After this algorithm all face-subsets are regular manifolds."
#define	TOOLTIP_MOVE_SUBSET "Moves a subset to another index."
#define	TOOLTIP_SWAP_SUBSETS "Swaps two subsets"
#define	TOOLTIP_JOIN_SUBSETS "Joins two subsets"
#define	TOOLTIP_ERASE_SUBSET "Erases a subset, but not its associated geometry."
#define	TOOLTIP_ERASE_EMPTY_SUBSETS "Erases Subsets, which do not contain any elements at all."
#define	TOOLTIP_ADJUST_SUBSETS_FOR_UG3 "Assigns face and edge indices so that the geometry can be used with ug3."
#define	TOOLTIP_ADJUST_SUBSETS_FOR_UG4 "Adjusts subsets for simulation with ug4."
#define	TOOLTIP_SEPARATE_FACE_SUBSETS_BY_NORMAL "Collects faces of each subset that have a similar normal and assigns them to new subsets."
#define	TOOLTIP_SEPARATE_FACE_SUBSET_BY_NORMAL "Collects faces of a given subset that have a similar normal and assigns them to new subsets."
#define	TOOLTIP_ASSIGN_SUBSETS_BY_QUALITY "Assigns the selected to a subset depending on their quality."
#define	TOOLTIP_SEPARATE_DEGENERATED_BOUNDARY_FACE_SUBSETS "Separates degenerated boundary face subsets at sharp creases."
#define	TOOLTIP_COPY_SUBSET_INDICES_TO_SIDES "Copies subset indices of selected elements to sides of those elements."
#define	TOOLTIP_ASSIGN_SUBSETS_BY_ELEMENT_TYPE "Assigns elemets to subsets based on their concrete type."

//coordinate transform tools
#define	TOOLTIP_GET_SELECTION_CENTER ""
#define TOOLTIP_SET_SELECTION_CENTER ""
#define TOOLTIP_MOVE_ALONG_NORMAL ""
#define TOOLTIP_SCALE_AROUND_CENTER ""
#define TOOLTIP_SCALE_AROUND_PIVOT ""
#define TOOLTIP_ROTATE_AROUND_CENTER ""
#define TOOLTIP_ROTATE_AROUND_PIVOT ""
#define	TOOLTIP_COORDINATES "Coordinates of the center of the current selection"
#define	TOOLTIP_MOVE "Moves selected vertices."
#define TOOLTIP_MOVE_MESH_TO "Moves the active mesh and its pivot, so that the pivot will be located on the specified position."
#define	TOOLTIP_NORMAL_MOVE "Moves selected vertices along their normal."
#define	TOOLTIP_SCALE "Scales the coordinates of the selected vertices around their center."
#define	TOOLTIP_ROTATE "Rotates the geometry by the given degrees around its center."
#define	TOOLTIP_TRANSFORM "Transforms the vertices with the given matrix"
#define	TOOLTIP_CONE_TRANSFORM "Transforms the vertices with the given cone transformation"
#define	TOOLTIP_LAPLACIAN_SMOOTH "Smoothes vertices in a grid."
#define	TOOLTIP_TANGENTIAL_SMOOTH "Smoothes vertices on a manifold."
#define	TOOLTIP_RPOJECT_TO_PLANE "Projects all selected elements to the specified plane"
#define	TOOLTIP_PROJECT_TO_LIMIT_PLOOP "Projects all vertices in the grid to their limit positions as defined by the piecewise loop scheme."
#define	TOOLTIP_PROJECT_TO_LIMIT_SMOOTH_BOUNDARY "Projects all boundary-vertices in the grid to their limit positions as defined by the b-spline subdivision scheme."
#define	TOOLTIP_SET_PIVOT "Sets the pivot point of the selected object."
#define	TOOLTIP_SET_PIVOT_TO_SELECTION_CENTER "Sets the pivot to the center of the current selection."
#define	TOOLTIP_SET_PIVOT_TO_MESH_CENTER "Sets the pivot to the center of the active mesh."
#define	TOOLTIP_FLATTEN_BENT_QUADRILATERALS "Flattens bent quadrilaterals using an iterative flattening scheme"
#define	TOOLTIP_APPLY_HEIGHT_FIELD "Calculates z-values of all nodes in terms of their x and y values." 

//	file io
#define TOOLTIP_LOAD_MESH ""
#define TOOLTIP_SAVE_MESH ""
#define TOOLTIP_EXPORT_TO_UG3 ""



//selection tools
#define	TOOLTIP_SELECT_LINKED_MANIFOLD_FACES "Selects faces linked with the selection, not crossing non-manifold edges." //?
#define	TOOLTIP_SELECT_NON_MANIFOLD_EDGES "Selects edges with more than 2 associated faces."
#define	TOOLTIP_CLEAR_SELECTION "Clears the selection"
#define	TOOLTIP_SELECT_SMOOTH_EDGE_PATH "Selects a smooth edge path."
#define	TOOLTIP_SELECT_BOUNDARY_VERTICES "Selects vertices that lie on the boundary of the geometry"
#define	TOOLTIP_SELECT_INNER_VERTICES "Selects vertices that do not lie on the boundary of the geometry"
#define	TOOLTIP_SELECT_BOUNDARY_EDGES "Selects edges that lie on the boundary of the geometry"
#define	TOOLTIP_SELECT_INNER_EDGES "Selects edges that do not lie on the boundary of the geometry"
#define	TOOLTIP_SELECT_BOUNDARY_FACES "Selects faces that lie on the boundary of the geometry"
#define	TOOLTIP_SELECT_INNER_FACES "Selects faces that do not lie on the boundary of the geometry"
#define	TOOLTIP_SELECT_SHORT_EDGES "Selects edges that are shorter than a given threshold."
#define	TOOLTIP_SELECT_LONG_EDGES "Selects edges that are longer than a given threshold."
#define	TOOLTIP_SELECT_CREASE_EDGES "Selects edges that at which triangles meet in a given angle."
#define	TOOLTIP_SELECT_DEGENERATE_FACES "Selects faces that have a height shorter than a given threshold."
#define	TOOLTIP_SELECT_LINKED_FLAT_FACES "Selects linked faces of selected faces that have a similar normal."
#define	TOOLTIP_SELECT_LINKED_BOUNDARY_EDGES "Selects linked boundary edges of selected edges."
#define	TOOLTIP_SELECT_LINKED_BOUNDARY_FACES "Selects linked boundary faces of selected faces."
#define	TOOLTIP_SELECT_INTERSECTING_TRIANGLES "Selects intersecting triangles. Neighbors are ignored."
#define	TOOLTIP_SELECT_ASSOCIATED_VERTICES "Selects vertices that belong to selected edges, faces and volumes."
#define	TOOLTIP_SELECT_ASSOCIATED_EDGES "Selects edges that belong to selected faces and volumes."
#define	TOOLTIP_SELECT_ASSOCIATED_FACES "Selects faces that belong to selected volumes."
#define	TOOLTIP_SELECT_ALL "Selects all vertices, edges ,faces and volumes of the current grid"
#define	TOOLTIP_SELECT_ALL_VERTICES "Selects all vertices of the current grid"
#define	TOOLTIP_DESELECT_ALL_VERTICES "Deselects all vertices of the current grid"
#define	TOOLTIP_SELECT_ALL_EDGES "Selects all edges of the current grid"
#define	TOOLTIP_DESELECT_ALL_EDGES "Deselects all edges of the current grid"
#define	TOOLTIP_SELECT_ALL_FACES "Selects all faces of the current grid"
#define	TOOLTIP_DESELECT_ALL_FACES "Deselects all faces of the current grid"
#define	TOOLTIP_SELECT_ALL_VOLUMES "Selects all volumes of the current grid"
#define	TOOLTIP_DESELECT_ALL_VOLUMES "Deselects all volumes of the current grid"
#define	TOOLTIP_SELECT_MARKED_VERTICES "Selects vertices which are marked."
#define	TOOLTIP_SELECT_MARKED_EDGES "Selects edges which are marked."
#define	TOOLTIP_SELECT_UNORIENTABLE_VOLUMES "Selects all volumes whose orientation can not be determined"
#define	TOOLTIP_EXTEND_SELECTION "Selects neighbors of selected elements."
#define	TOOLTIP_SELECT_VERTEX_BY_INDEX "Selects a vertex given its index."
#define	TOOLTIP_SELECT_EDGE_BY_INDEX "Selects a edge given its index."
#define	TOOLTIP_SELECT_FACE_BY_INDEX "Selects a face given its index."
#define	TOOLTIP_SELECT_VOLUME_BY_INDEX "Selects a volume given its index."
#define	TOOLTIP_SELECT_VERTEX_BY_COORDINATE "Selects a vertex given a coordinate."
#define	TOOLTIP_SELECT_EDGE_BY_COORDINATE  "Selects the edge whose center is closest to the specified coordinate."
#define	TOOLTIP_SELECT_FACE_BY_COORDINATE "Selects the face whose center is closest to the specified coordinate."
#define	TOOLTIP_SELECT_VOLUME_BY_COORDINATE "Selects the volume whose center is closest to the specified coordinate."
#define	TOOLTIP_SELECT_UNCONNECTED_VERTICES "Selects vertices which are not connected to the given element type."
#define	TOOLTIP_SELECT_SUBSET "Selects all elements of a subset."
#define	TOOLTIP_SELECT_SUBSET_BOUNDARY "Selects the boundary of a subset."
#define	TOOLTIP_SELECT_UNASSIGNED_ELEMENTS "Selects all elements not assigned to any subset."
#define	TOOLTIP_INVERT_SELECTION "Inverts current selection."
#define	TOOLTIP_EDGE_SELECTION_FILL "Selects neighbours of selected edges over non-selected vertices."
#define	TOOLTIP_FACE_SELECTION_FILL "Selects neighbours of selected faces over non-selected edges."
#define	TOOLTIP_VOLUME_SELECTION_FILL "Selects neighbours of selected volumes over non-selected faces."
#define	TOOLTIP_SELECT_SELECTION_BOUNDARY "Selects the boundary of the current selection."
#define	TOOLTIP_SELECT_BENT_QUADRILATERALS "Selects quadrilaterals which do not lie in a plane."
#define	TOOLTIP_CLOSE_SELECTION "Selects all associated elements of lower dimensions."

//mark tools
#define	TOOLTIP_CLEAR_MARKS "Clears all marks"
#define	TOOLTIP_MARK_CREASE_EDGES "Marks edges whose associated faces have a certain angle as crease-edge."
#define	TOOLTIP_MARK_SELECTION "Marks selected vertices and edges."
#define	TOOLTIP_UNMARK_SELECTION "Unmarks selected elements."

//fracture tools
#define	TOOLTIP_EXPAND_LAYERS_2D "Expands a 1d layer to a 2d layer by introducing quadrilaterals."
#define	TOOLTIP_EXPAND_LAYERS_3D "Expands a 2d layer to a 3d layer by introducing prisms."
#define	TOOLTIP_FRAC_TO_LAYER "Enhances a 2d fracture to a 3d fracture."

//new tools
#define TOOLTIP_SELECT_VERTEX_IN_BOX ""
#define TOOLTIP_SELECT_EDGE_IN_BOX ""
#define TOOLTIP_SELECT_FACE_IN_BOX ""
#define TOOLTIP_SELECT_VOLUME_IN_BOX ""
#define TOOLTIP_SELECT_VERTEX_IN_CYLINDER ""
#define TOOLTIP_SELECT_EDGE_IN_CYLINDER ""
#define TOOLTIP_SELECT_FACE_IN_CYLINDER ""
#define TOOLTIP_SELECT_VOLUME_IN_CYLINDER ""
#define TOOLTIP_SCALE_AROUND_PIVOT ""




//	all changes should go above the endif statement
#endif
