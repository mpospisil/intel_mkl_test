#See https://aka.ms/containerfastmode to understand how Visual Studio uses this Dockerfile to build your images for faster debugging.

#Depending on the operating system of the host machines(s) that will build or run the containers, the image specified in the FROM statement may need to be changed.
#For more information, please see https://aka.ms/containercompat

#FROM mcr.microsoft.com/dotnet/runtime:6.0 AS base
FROM mpospisil/dotnet-runtime-windowsdesktop:6.0.18-nanoserver-ltsc2022 AS base
#FROM mpospisil/dotnet-runtime-windowsdesktop:6.0.18-windowsservercore-ltsc2022 AS base

WORKDIR /app

FROM mpospisil/dotnet-runtime-windowsdesktop:6.0.18-windowsservercore-ltsc2022 AS build
WORKDIR /src

#COPY . .
#WORKDIR "/src/."

RUN Invoke-WebRequest -Uri https://mpospisil-public.s3.eu-central-1.amazonaws.com/K2FemMklLoader.zip -OutFile K2FemMklLoader.zip
RUN Expand-Archive -Path K2FemMklLoader.zip -DestinationPath . 
RUN Remove-Item K2FemMklLoader.zip


FROM base AS final
WORKDIR /app
COPY --from=build /src .

ENTRYPOINT ["cmd"]