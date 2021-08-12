// main_persistent.ysc @ L332442
int func_5263()
{
  int iVar0;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar0 = 0;
  while (iVar0 < 3)
  {
    if (!STREAMING::HAS_ANIM_DICT_LOADED(&(Global_110720.f_48[iVar0 /*16*/])))
    {
      return 0;
    }
    iVar0++;
  }
  iVar1 = func_5226();
  iVar2 = func_5225(28);
  iVar3 = func_5224();
  if ((((((AUDIO::REQUEST_SCRIPT_AUDIO_BANK(&(Global_110720.f_154), false, -1) && STREAMING::HAS_MODEL_LOADED(iVar1)) && STREAMING::HAS_MODEL_LOADED(iVar2)) && STREAMING::HAS_MODEL_LOADED(iVar3)) && STREAMING::HAS_ANIM_DICT_LOADED(&(Global_110720.f_162))) && STREAMING::HAS_ANIM_DICT_LOADED(&(Global_110720.f_138))) && PED::_DOES_RELATIONSHIP_GROUP_EXIST(Global_110720.f_13))
  {
    return 1;
  }
  return 0;
}