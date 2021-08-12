// abigail2_1.ysc @ L71986
bool func_2081(int iParam0)
{
  return iParam0 != 0;
}

Vector3 func_2082(int iParam0)
{
  if (Global_1945938[iParam0 /*18*/].f_5 == 1)
  {
    return VOLUME::_GET_VOLUME_COORDS(Global_1945938[iParam0 /*18*/].f_10);
  }
  else if (Global_1945938[iParam0 /*18*/].f_5 == 2)
  {
    return Global_1945938[iParam0 /*18*/].f_6;
  }
  else if (Global_1945938[iParam0 /*18*/].f_5 == 3)
  {
    return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_1945938[iParam0 /*18*/].f_11, Global_1945938[iParam0 /*18*/].f_12);
  }
  return 0f, 0f, 0f;
}