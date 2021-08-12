// property_use_core.ysc @ L9127
int func_361(var uParam0, int iParam1)
{
  var uVar0;
  struct<5> Var7;

  if (!func_766(&uVar0, iParam1))
  {
    return 0;
  }
  if (!func_767(&uVar0, &Var7))
  {
    return 0;
  }
  uParam0->f_317 = iParam1;
  uParam0->f_314 = { Var7 };
  uParam0->f_304 = Var7.f_3;
  if (Var7.f_4 == 0)
  {
    return func_768(uParam0, Var7, Var7.f_3);
  }
  else
  {
    STREAMING::_0x032A14D082A9B269(Var7.f_4);
    func_347(&(uParam0->f_318), 1024);
    func_348(&(uParam0->f_318), 2048);
    return 1;
  }
  return 1;
}