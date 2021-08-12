// beat_outlaw_looter.ysc @ L4761
void func_129()
{
  if (bLocal_438)
  {
    return;
  }
  if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_462, true, 0))
  {
    if (!func_131(&uLocal_446))
    {
      func_133(&uLocal_446);
    }
    else if (func_280(&uLocal_446))
    {
      func_282(&uLocal_446, func_281(&uLocal_446), 0);
    }
  }
  else if (func_131(&uLocal_446))
  {
    func_283(&uLocal_446);
  }
  if (func_130(&uLocal_446, 3f))
  {
    VOLUME::_0xD52DF30355EA7C8E(iLocal_462, uLocal_351[0], 1);
    VOLUME::_0x4A8FEFC43FD8AC9B(iLocal_462, 0, 1);
    bLocal_438 = true;
  }
}