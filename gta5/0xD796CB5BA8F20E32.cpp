// act_cinema.ysc @ L85928
int func_502(bool bParam0)
{
  if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2426865[bParam0 /*449*/].f_254)
  {
    return 1;
  }
  return 0;
}