// abigail21_outro.ysc @ L118
int func_2(var uParam0, var uParam1)
{
  uParam0->f_1 = uParam1->f_1;
  if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam1))
  {
    uParam0->f_2 = *uParam1;
    ANIMSCENE::TAKE_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_2);
    func_18(uParam0, 1);
  }
  if (uParam1->f_3)
  {
    func_18(uParam0, 2);
  }
  func_19(uParam0);
  SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME());
  return 1;
}