// act_cinema.ysc @ L102155
void func_783(var uParam0, var uParam1)
{
  int iVar0;
  struct<3> Var1;
  float fVar4;
  
  if (Global_2405077.f_2261 > 0)
  {
    iVar0 = 0;
    while (iVar0 < Global_2405077.f_2261)
    {
      if (func_784(Global_2405077.f_2262[iVar0 /*4*/], uParam0))
      {
        fVar4 = Global_2405077.f_2262[iVar0 /*4*/].f_3;
        if (SYSTEM::VMAG(*uParam1) > 0.01f)
        {
          Var1 = { *uParam1 - Global_2405077.f_2262[iVar0 /*4*/] };
          fVar4 = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.x, Var1.f_1);
        }
        func_744(Global_2405077.f_2262[iVar0 /*4*/], fVar4, uParam0, uParam1, 0, uParam0->f_28);
        Global_2405077.f_2490++;
      }
      iVar0++;
    }
  }
  if (uParam0->f_5 && Global_2405077.f_2887)
  {
    func_738(&(Global_2405077.f_2490.f_6[0 /*10*/]), &(Global_2405077.f_2490.f_6[1 /*10*/]), &(Global_2405077.f_2490.f_6[2 /*10*/]));
  }
}