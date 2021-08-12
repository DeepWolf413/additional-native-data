// coachrobberies.ysc @ L1405
void func_23(int iParam0)
{
  if (iParam0 == -1)
  {
    return;
  }
  if (func_120(Global_1392388.f_10[iParam0 /*13*/].f_5))
  {
    return;
  }
  if (!PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(Global_1392388.f_10[iParam0 /*13*/].f_5, 1, 1, 3f, 0f)))
  {
    func_123(Global_1392388.f_10[iParam0 /*13*/].f_5, 125f, 0, 0, 5);
  }
}