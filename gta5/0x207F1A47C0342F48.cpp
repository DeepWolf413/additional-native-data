// golf.ysc @ L114684
void func_1036(var uParam0, var uParam1)
{
  float fVar0;
  char* sVar1;
  bool bVar2;
  char cVar3[32];
  char cVar11[32];
  
  sVar1 = func_1002(uParam0, uParam1, &fVar0, 0, 0, 0, 0);
  bVar2 = !func_461(sVar1);
  StringCopy(&cVar3, func_840(uParam1, uParam0, 0, 1), 32);
  cVar11 = { cVar3 };
  StringConCat(&cVar3, "shuffle", 32);
  StringConCat(&cVar11, "shuffle", 32);
  if (bVar2)
  {
    StringConCat(&cVar11, sVar1, 32);
  }
  if (ENTITY::IS_ENTITY_PLAYING_ANIM(func_1351(uParam0), func_944(1), &cVar11, 3))
  {
    if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(func_1351(uParam0), func_944(1), &cVar11) < 0.9f)
    {
      if (bVar2)
      {
        TASK::SET_ANIM_WEIGHT(PLAYER::PLAYER_PED_ID(), (1f - fVar0), 0, 0, false);
        TASK::SET_ANIM_WEIGHT(PLAYER::PLAYER_PED_ID(), fVar0, 0, 1, false);
      }
    }
    return;
  }
  func_995(func_1351(uParam0), &cVar3, &cVar11, bVar2, fVar0, 1f, 10, 0f, 0.125f, 0.125f, 1);
}