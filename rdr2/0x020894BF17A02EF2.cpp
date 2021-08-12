// act_caunc_rustling_invite.ysc @ L6939
int func_228(char* sParam0)
{
  struct<4> Var0;

  if (!func_58(sParam0->f_375) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(sParam0->f_35.f_156))
  {
    ANIMSCENE::SET_ANIM_SCENE_ORIGIN(sParam0->f_35.f_156, sParam0->f_375, 0f, 0f, sParam0->f_378, 2);
  }
  MemCopy(&Var0, {sParam0->f_17}, 4);
  if (func_448(Var0, &(sParam0->f_35)))
  {
    return 1;
  }
  return 0;
}