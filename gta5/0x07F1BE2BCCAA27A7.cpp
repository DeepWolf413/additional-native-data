// am_mp_casino_nightclub.ysc @ L369337
float func_5282(char* sParam0, char* sParam1)
{
  var uVar0;
  var uVar1;
  
  if (ENTITY::FIND_ANIM_EVENT_PHASE(sParam0, sParam1, "ENTER", &uVar0, &uVar1))
  {
    return uVar0;
  }
  return 0f;
}