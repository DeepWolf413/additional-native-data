// fm_content_sightseeing.ysc @ L21643
int func_500(int iParam0)
{
  int iVar0;
  
  if (MISC::GET_GAME_TIMER() > iLocal_2535 + 200)
  {
    iLocal_2535 = MISC::GET_GAME_TIMER();
    iVar0 = ENTITY::GET_ENTITY_ALPHA(iParam0);
    if (iVar0 > 0)
    {
      iVar0 = (iVar0 - 30);
      if (iVar0 <= 0)
      {
        iVar0 = 0;
      }
      ENTITY::SET_ENTITY_ALPHA(iParam0, iVar0, false);
    }
    else
    {
      iLocal_2533 = 0;
      ENTITY::DELETE_ENTITY(&iParam0);
      MISC::FORCE_LIGHTNING_FLASH();
      return 1;
    }
  }
  return 0;
}