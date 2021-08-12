// am_mp_casino_nightclub.ysc @ L374416
int func_5377(char* sParam0, char* sParam1, int iParam2)
{
  int iVar0;
  var uVar1;
  var uVar2;
  float fVar3;
  float fVar4;
  
  iVar0 = PLAYER::PLAYER_PED_ID();
  if (ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, sParam0, sParam1, 3))
  {
    if (ENTITY::FIND_ANIM_EVENT_PHASE(sParam0, sParam1, "EXIT", &uVar1, &uVar2))
    {
      return ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, 1921928004);
    }
    fVar3 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iVar0, sParam0, sParam1);
    fVar4 = ENTITY::GET_ENTITY_ANIM_TOTAL_TIME(iVar0, sParam0, sParam1);
    if (fVar3 > 0f)
    {
      return SYSTEM::ROUND((fVar4 - (fVar4 * fVar3))) < iParam2;
    }
  }
  return 0;
}