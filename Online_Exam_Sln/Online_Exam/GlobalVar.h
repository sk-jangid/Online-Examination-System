#pragma once

#ifndef __globalvar__
#define __globalvar__

using namespace System;

namespace Global_Var{
	
	public ref class gVar
	{
	public:
		static String^ Username = L"shubhama";		//Default value added temporarily to test other modules, remove when Login.h and Signup.h properly working
		static String^ Fullname = L"";
		static String^ Passhash = L"";
		static String^ Passsalt = L"";
		static String^ Tokenhash = L"";
		static String^ Tokensalt = L"";
		static String^ Email = L"";
		static String^ Phone = L"";
		static String^ Rollno = L"";
		static String^ Groups = L"";
		static String^ IITG = L"";
		static String^ Branch = L"";
		static String^ Designation = L"";
		gVar() {}
		~gVar() {}
		static void ClearGvars()
		{
			Username = L"tushar";
			Fullname = L"";
			Passhash = L"";
			Passsalt = L"";
			Tokenhash = L"";
			Tokensalt = L"";
			Email = L"";
			Phone = L"";
			Rollno = L"";
			Groups = L"";
			IITG = L"";
			Branch = L"";
			Designation = L"";
		}
	};

}
#endif
