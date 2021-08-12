// bjack_sp.ysc @ L9397
void func_304(var uParam0, int iParam1)
{
  uParam0->f_1239.f_3 = iParam1;
  if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(uParam0->f_1239))
  {
    TASK::_0x615DC4A82E90BB48(uParam0->f_1239, uParam0->f_1351[iParam1], joaat("DEFAULT"));
  }
}