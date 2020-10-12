//	Spawn helper function	//
// void SpawnObject(string objectName, vector position, vector orientation)
// {
    // Object obj;
    // obj = Object.Cast(GetGame().CreateObject(objectName, "0 0 0"));
    // obj.SetPosition(position);
    // obj.SetOrientation(orientation);

    // Force update collisions
    // if (obj.CanAffectPathgraph())
    // {
        // obj.SetAffectPathgraph(true, false);
        // GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(GetGame().UpdatePathgraphRegionByObject, 100, false, obj);
    // }
// }
//  End Spawn helper function  //


void Nomad_Train()
{
	//Train Main 
SpawnObject( "vbldr_stone2", "8625.650391 7.555510 2670.949951", "5.072895 -8.971596 -36.199997" );
SpawnObject( "vbldr_stone3", "8622.940430 7.237430 2671.100098", "-13.486194 -26.783632 -15.592957" );
SpawnObject( "vbldr_stone5", "8623.049805 7.159440 2669.520020", "2.893563 -33.081905 -4.174771" );
SpawnObject( "vbldr_stone4", "8624.959961 5.618880 2668.669922", "-0.342835 1.524897 -12.702597" );
SpawnObject( "vbldr_stone5", "8618.160156 6.653190 2668.699951", "-81.826523 11.952006 -164.556839" );
SpawnObject( "vbldr_stone1", "8624.980469 7.307460 2676.629883", "-49.570953 3.936322 -11.634597" );
SpawnObject( "vbldr_stone2", "8622.530273 7.380440 2674.189941", "-3.050509 -35.138958 17.608583" );
SpawnObject( "vbldr_stone3", "8618.759766 7.097460 2666.770020", "-45.727219 26.376953 -62.727997" );
SpawnObject( "vbldr_stone4", "8620.919922 6.139130 2667.209961", "169.066818 48.722725 174.186859" );
SpawnObject( "vbldr_stone3", "8621.410156 7.521970 2671.219971", "9.249603 -12.098600 -27.860743" );
SpawnObject( "vbldr_stone3", "8621.799805 7.413850 2668.719971", "37.408115 10.607616 -77.636513" );
SpawnObject( "Land_Container_1Moh", "8605.160156 8.605110 2703.219971", "174.999802 -0.237801 0.532016" );
SpawnObject( "Land_Container_1Moh", "8605.669922 8.605110 2697.000000", "-5.000185 -0.237801 0.532016" );
SpawnObject( "vbldr_wreck_bmp2", "8613.639648 8.840000 2679.889893", "13.998412 9.999815 -5.005320" );
SpawnObject( "vbldr_rail_tracke_turnoutr_lc", "4926.750000 6.122370 2127.860107", "-71.998779 0.034971 0.010807" );
SpawnObject( "vbldr_rail_tracke_r30_20_lc", "4908.580078 5.795220 2139.590088", "-48.999138 0.000000 0.000000" );
SpawnObject( "vbldr_rail_tracke_r30_20_lc", "4894.879883 5.795220 2154.020020", "-38.000008 0.000000 0.000000" );
SpawnObject( "vbldr_rail_tracke_r30_20_lc", "4883.870117 5.795220 2170.620117", "-28.999517 0.000000 0.000000" );
SpawnObject( "vbldr_rail_tracke_r30_20_lc", "4875.959961 6.350000 2188.830078", "-17.999987 2.998346 0.006308" );
SpawnObject( "Land_Train_742_Red", "8626.839844 8.000000 2663.409912", "-56.999485 7.999250 -92.999359" );
SpawnObject( "vbldr_train_wagon_tanker", "8618.389648 8.400000 2672.610107", "-32.001244 -10.999234 -61.001469" );
SpawnObject( "vbldr_train_wagon_flat", "8611.750000 7.000000 2685.310059", "-39.002041 -5.000141 -16.005993" );
SpawnObject( "vbldr_train_wagon_flat", "8605.139648 6.671410 2700.879883", "-5.467229 -0.192338 0.456527" );
SpawnObject( "vbldr_train_wagon_tanker", "8597.700195 7.743270 2713.530029", "-37.997952 -1.000209 7.667586" );
SpawnObject( "Land_Container_1Mo", "8610.339844 8.350000 2683.959961", "-26.000000 4.000000 -31.000002" );
}
