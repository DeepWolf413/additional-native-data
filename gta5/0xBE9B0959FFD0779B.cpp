// act_cinema.ysc @ L108006
int func_931(int iParam0)
{
  if (Global_2426865[iParam0 /*449*/].f_71.f_6 != -1)
  {
    return 1;
  }
  return 0;
}

Vector3 func_932(int iParam0)
{
  int iVar0;
  
  switch (HUD::GET_BLIP_INFO_ID_TYPE(iParam0))
  {
    case 1:
    case 2:
    case 3:
      iVar0 = HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(iParam0);
      if (ENTITY::DOES_ENTITY_EXIST(iVar0))
      {
        return ENTITY::GET_ENTITY_COORDS(iVar0, false);
      }
      break;
  }
  return HUD::GET_BLIP_COORDS(iParam0);
}