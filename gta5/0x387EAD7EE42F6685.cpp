// act_cinema.ysc @ L102228
void func_788(float fParam0, float fParam1)
{
  PATHFIND::ADD_NAVMESH_REQUIRED_REGION(fParam0, fParam1, 0.1f);
  Global_2405077.f_2473 = SCRIPT::GET_ID_OF_THIS_THREAD();
  Global_2405077.f_2471 = 1;
  Global_2405077.f_2474 = NETWORK::GET_NETWORK_TIME();
}