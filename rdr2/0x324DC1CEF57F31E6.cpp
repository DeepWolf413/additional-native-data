// dominoes_sp.ysc @ L20925
var func_599(var uParam0)
{
  var uVar0;

  MISC::SET_BITS_IN_RANGE(&uVar0, 0, 4, *uParam0);
  MISC::SET_BITS_IN_RANGE(&uVar0, 5, 10, uParam0->f_1 + 32);
  MISC::SET_BITS_IN_RANGE(&uVar0, 11, 16, uParam0->f_1.f_1 + 32);
  MISC::SET_BITS_IN_RANGE(&uVar0, 17, 19, uParam0->f_3);
  MISC::SET_BITS_IN_RANGE(&uVar0, 20, 31, uParam0->f_4);
  return uVar0;
}