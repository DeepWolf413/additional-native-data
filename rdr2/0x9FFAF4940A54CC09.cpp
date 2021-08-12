// beat_bandito_breakout.ysc @ L11046
int func_315(char* sParam0, char* sParam1)
{
  return BUILTIN::CEIL((1000f * ENTITY::GET_ANIM_DURATION(sParam0, sParam1)));
}