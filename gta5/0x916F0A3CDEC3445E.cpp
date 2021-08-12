// act_cinema.ysc @ L102307
void func_795()
{
  if (Global_2405077.f_2471)
  {
    if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405077.f_2473)
    {
      PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
    }
    else
    {
      PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
    }
    Global_2405077.f_2471 = 0;
  }
}