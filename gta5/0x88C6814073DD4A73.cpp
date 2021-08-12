// agency_heist3b.ysc @ L97901
void func_502(var uParam0)
{
  if (uParam0->f_885)
  {
    if (uParam0->f_885.f_1)
    {
      STREAMING::REMOVE_PTFX_ASSET();
      func_46(&(uParam0->f_885));
    }
    else
    {
      uParam0->f_885.f_2 = 1;
      uParam0->f_1007 = 1;
    }
  }
}