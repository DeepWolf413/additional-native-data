// am_casino_peds.ysc @ L89643
void func_723(var uParam0, float fParam1)
{
  int iVar0;
  char* sVar1;
  char* sVar2;
  
  iVar0 = *uParam0;
  if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
  {
    return;
  }
  sVar1 = func_661(4);
  sVar2 = func_708(33, 0);
  if (ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, sVar1, sVar2, 3))
  {
    ENTITY::SET_ENTITY_ANIM_SPEED(iVar0, sVar1, sVar2, fParam1);
  }
}