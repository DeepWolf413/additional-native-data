// rcm_crackpot2.ysc @ L14316
void func_440(var uParam0)
{
  if (iLocal_426 >= 4)
  {
    return;
  }
  if (func_354())
  {
    return;
  }
  if (func_557(iLocal_14, Global_36, 1) > 30f)
  {
    return;
  }
  if (!PED::_0x5C6C7C70CA302801(Global_35))
  {
    return;
  }
  if (!func_79(&uLocal_147) || func_371(&uLocal_147) > 10f)
  {
    if (func_353(uParam0, "CKPT2_GOAWAY", 0))
    {
      func_258(&uLocal_147);
      iLocal_426++;
    }
  }
}